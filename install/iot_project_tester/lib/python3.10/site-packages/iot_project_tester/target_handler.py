import sys
import time

import rclpy
from rclpy.node import Node
from iot_project_interfaces.srv import TargetManagerInterface
from iot_project_interfaces.srv import ColorTarget


from geometry_msgs.msg import Point
from threading import Thread

from rclpy.executors import MultiThreadedExecutor
from rosgraph_msgs.msg import Clock
from nav_msgs.msg import Odometry
from std_msgs.msg import Int64


from iot_project_tester.math_utils import *


DRONES = ["X3_0", "X3_1", "X3_2"]
TARGET_EPS = 0.5



class TargetHandler(Node):

    def __init__(self):
        super().__init__('target_publisher')
        
        self.clock = 0
        
        self.targets = []
        self.targets_state_has_changed = []
        self.drone_odometry_topics = []

        self.drone_positions = {}
        self.drones_last_visit = {}

        self.set_target_service = self.create_service(
            TargetManagerInterface,
            'task_assigner/set_targets',
            self.set_targets
        )
        
        self.get_target_service = self.create_service(
            TargetManagerInterface,
            'task_assigner/get_targets',
            self.get_targets
        )


        self.time_subscriber = self.create_subscription(
            Clock,
            '/world/iot_project_world/clock',
            self.store_time_callback,
            10
        )

        self.color_changer_service = self.create_client(
            ColorTarget,
            'iot_project/change_color'
        )


        for drone in DRONES:
            print(drone)
            self.create_subscription(
                Odometry,
                drone+"/odometry",
                lambda msg, drone=drone: self.register_drone_position(msg, drone),
                10,
            )


        self.get_logger().info("Target handler started. Positions are being published to /task_assigner/get_targets")

        Thread(target=self.start_tester).start()


    def start_tester(self):


        self.get_logger().info("Starting tester")

        while True:
            for t in range(len(self.targets)):
                
                currently_visited = False

                for d in self.drone_positions.keys():

                    p0 = (self.drone_positions[d].x, self.drone_positions[d].y, self.drone_positions[d].z)
                    p1 = (self.targets[t]["position"].x, self.targets[t]["position"].y, self.targets[t]["position"].z)
                    

                    if point_distance(p0, p1) < TARGET_EPS:
                        self.drones_last_visit[d] = t
                        self.targets[t]["last_visit"] = float(self.clock)
                        currently_visited = True

                if currently_visited != self.targets[t]["currently_visited"]:
                    if currently_visited == True:
                        self.change_color(self.targets[t]["name"], (0.0, 1.0, 0.0))
                    if currently_visited == False:
                        self.change_color(self.targets[t]["name"], (0.0, 0.0, 1.0))

                self.targets[t]["currently_visited"] = currently_visited

            time.sleep(0.01)

    def register_drone_position(self, msg : Odometry, drone : str):
        self.drone_positions[drone] = msg.pose.pose.position


    def store_time_callback(self, msg : Clock):
        self.clock = msg.clock.sec * 10**9 + msg.clock.nanosec

    def get_targets(self, request : TargetManagerInterface.Request, response : TargetManagerInterface.Response):

        response = TargetManagerInterface.Response()

        response.targets            = [target['position'] for target in self.targets]
        response.last_visits        = [target['last_visit'] for target in self.targets]
        response.expiration_times   = [target['expiration_time'] for target in self.targets]


        return response
        
    def set_targets(self, request, response):

        #self.targets = request.targets
        #self.get_logger().info("Targets have been set!")

        self.get_logger().info("Setting target has been disabled for safety reason. Targets are now set only at runtime.")

        return response
    

    def set_targets_from_argv(self, args):

        targets = []

        for i in range(0, len(args), 5):
            
            try:
                targets.append(
                    {
                        "name"              : args[i],
                        "position"          : Point(
                                                x = float(args[i+1]),
                                                y = float(args[i+2]),
                                                z = float(args[i+3]),
                                            ),
                        "expiration_time"   : float(args[i+4]),
                        "last_visit"        : 0.0,
                        "currently_visited" : False
                    }
                )

            except:
                break

        self.targets = targets
        

    def change_color(self, target : str, color : tuple):


        if len(color) < 3:
            return
        
        request = ColorTarget.Request()
        request.target = target
        request.r = color[0]
        request.g = color[1]
        request.b = color[2]

        self.color_changer_service.call_async(request)

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