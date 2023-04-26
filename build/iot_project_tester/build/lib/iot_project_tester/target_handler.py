import sys
import time

import rclpy
from rclpy.node import Node
from iot_project_interfaces.srv import TargetManagerInterface
from iot_project_interfaces.msg import TargetPositions
from geometry_msgs.msg import Point
from threading import Thread

from rclpy.executors import MultiThreadedExecutor
from rosgraph_msgs.msg import Clock
from nav_msgs.msg import Odometry
from std_msgs.msg import Int64


from iot_project_solution.math_utils import *


DRONES = ["X3_0", "X3_1", "X3_2"]


class TargetHandler(Node):

    def __init__(self):
        super().__init__('target_publisher')
        
        self.clock = 0
        self.targets = []
        
        self.targets_last_visit = [0.0]*5
        self.drone_odometry_topics = []

        self.drone_positions = {}
        self.drones_last_visit = {}

        self.set_target_service = self.create_service(
            TargetManagerInterface,
            'task_assigner/set_targets',
            self.set_targets)
        
        self.get_target_service = self.create_service(
            TargetManagerInterface,
            'task_assigner/get_targets',
            self.send_target_positions
        )


        self.time_subscriber = self.create_subscription(
            Clock,
            '/world/iot_project_world/clock',
            self.store_time_callback,
            10
        )


        for drone in DRONES:

            self.create_subscription(
                Odometry,
                drone+"/odometry",
                lambda msg: self.register_drone_position(msg, drone), #self.register_drone_position,
                10,
                
            )


        self.get_logger().info("Target handler started. Positions are being published to /task_assigner/get_targets")

        Thread(target=self.start_tester).start()


    def start_tester(self):


        self.get_logger().info("Starting tester")

        while True:

            for d in self.drone_positions.keys():
                for t in range(len(self.targets)):


                    p0 = (self.drone_positions[d].x, self.drone_positions[d].y, self.drone_positions[d].z)
                    p1 = (self.targets[t].x, self.targets[t].y, self.targets[t].z)
                    
                    if point_distance(p0, p1) < 1:
                        self.drones_last_visit[d] = t
                        self.targets_last_visit[t] = float(self.clock)

            time.sleep(0.1)

    def register_drone_position(self, msg : Odometry, drone : str):
        self.drone_positions[drone] = msg.pose.pose.position


    def store_time_callback(self, msg : Clock):
        self.clock = msg.clock.sec * 10**9 + msg.clock.nanosec

    def send_target_positions(self, request : TargetManagerInterface.Request, response : TargetManagerInterface.Response):

        response = TargetManagerInterface.Response()
        response.targets = self.targets
        response.last_visits = self.targets_last_visit

        return response
        
    def set_targets(self, request, response):

        #self.targets = request.targets
        #self.get_logger().info("Targets have been set!")

        self.get_logger().info("Setting target has been disabled for safety reason. Targets are now set only at runtime.")

        return response
    

    def set_targets_from_argv(self, args):

        targets = []

        for i in range(0, len(args), 3):
            
            try:
                targets.append(
                    Point(
                        x = float(args[i]),
                        y = float(args[i+1]),
                        z = float(args[i+2])
                    )
                )

            except:
                break

        self.targets = targets



def main():
    rclpy.init()
    
    executor = MultiThreadedExecutor()
    target_publisher = TargetHandler()

    if (len(sys.argv) > 1):
        target_publisher.set_targets_from_argv(sys.argv[1:])

    executor.add_node(target_publisher)
    executor.spin()

    executor.shutdown()
    target_publisher.destroy_node()

    rclpy.shutdown()