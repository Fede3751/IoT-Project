
import rclpy
from rclpy.action import ActionServer
from rclpy.node import Node
from rclpy.executors import MultiThreadedExecutor

	
class DroneController(Node):
	def __init__(self):
		super().__init__("drone_controller")

		# This class should assign commands to you drones.
		# Start from here!



def main():
	rclpy.init()

	executor = MultiThreadedExecutor()
	drone_controller = DroneController()
	executor.add_node(drone_controller)
	executor.spin()

	executor.shutdown()
	drone_controller.destroy_node()

	rclpy.shutdown()
