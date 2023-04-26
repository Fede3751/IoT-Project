import time

import rclpy
from rclpy.node import Node
from rclpy.executors import MultiThreadedExecutor


class TaskAssigner(Node):

    def __init__(self):

        super().__init__('task_assigner')


        # This class should read target position from /task_assigner/get_targets
        # and send goal to the drone_controller action.


        
def main():
    
    rclpy.init()
    
    threaded_executor = MultiThreadedExecutor()
    task_assigner = TaskAssigner()

    threaded_executor.add_node(task_assigner)
    threaded_executor.spin()

    threaded_executor.shutdown()
    task_assigner.destroy_node()

    rclpy.shutdown()

