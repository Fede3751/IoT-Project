from threading import Thread

import rclpy
from rclpy.node import Node
from rclpy.executors import MultiThreadedExecutor
from rclpy.task import Future

import dearpygui.dearpygui as dpg

from rosgraph_msgs.msg import Clock
from iot_project_interfaces.srv import TargetManagerInterface

TIME_PER_TARGET = 30
MAX_TIME = 120

# ------------------------------ IoT Project Grader Display -------------------------------
# This Node calculates the current score of the simulation, by listening to the simulation
# time and doing the appropriate calculations.
# Current implementation currently fixed for only 5 targets. Can be easily parametrized to
# work with multiple targets.
# -----------------------------------------------------------------------------------------


class GradeDisplay(Node):

    def __init__(self):
        super().__init__('grade_display')


        # parameters for tracking the targets' values
        self.target_tags = ["target_0", "target_1", "target_2", "target_3", "target_4"]
        self.last_visits = [0.0]*5
        self.timer_tag = "timer"
        self.score_tag = "score"
        self.display_thread = None

        self.clock = 0

        # subscribe to the clock of the gazebo world
        self.time_subscriber = self.create_subscription(
            Clock,
            '/world/iot_project_world/clock',
            self.store_time_callback,
            10
        )

        # create a client for the target service
        self.target_client = self.create_client(
            TargetManagerInterface,
            '/task_assigner/get_targets'
        )

        self.create_timer(0.1, self.update_times)
        self.start_gui()
        self.get_logger().info("Grader Display started")
        

    def update_times(self):
        future = self.target_client.call_async(TargetManagerInterface.Request())
        future.add_done_callback(self.update_times_callback)
    
    def update_times_callback(self, res : Future):
        self.last_visits = res.result().last_visits

    def store_time_callback(self, msg : Clock):
        self.clock = msg.clock.sec * 10**9 + msg.clock.nanosec

    def start_gui_function(self):
        test = None

        dpg.create_context()
        dpg.create_viewport(title='IoT Project Grader', width=800, height=400)

        with dpg.window(tag = "Test", pos=(0,0), width=800, height=400, no_title_bar=True, no_resize=True, no_move=True):

            dpg.add_button(label = "Time left to visit:", width = 782, )

            with dpg.group(horizontal=True):
                    
                    for i in range(len(self.target_tags)):

                        with dpg.group():
                            dpg.add_button(label="Target %d" % (i+1), width=150)
                            dpg.add_slider_float(tag=self.target_tags[i], max_value = TIME_PER_TARGET, width = 150, height = 150, vertical = True)


            dpg.add_button(tag=self.timer_tag, label = "TIMER", width = 782, height = 90)
            dpg.add_button(tag=self.score_tag, label = "SCORE", width = 782, height = 90)


        dpg.setup_dearpygui()
        dpg.show_viewport()
        clock_float = 0.0
        score = 0
        while dpg.is_dearpygui_running():


            score_weight = 0
            if clock_float < MAX_TIME:
                score_weight = self.clock / 10** 9 - clock_float
            clock_float = self.clock / 10**9

            time_left = max(0, MAX_TIME - clock_float)

            dpg.configure_item(self.timer_tag, label="TIME LEFT: %d" % time_left)

            for t in range(len(self.last_visits)):

                target_time_float = self.last_visits[t] / 10**9

                target_time_left = max(0, TIME_PER_TARGET - (clock_float - target_time_float))

                if target_time_left > 0:
                    score += 1 * score_weight
                #print(time_left)

                dpg.set_value(self.target_tags[t], value=target_time_left)
                dpg.configure_item(self.score_tag, label="SCORE: %d" % score)

            dpg.render_dearpygui_frame()


        dpg.destroy_context()
        dpg.stop_dearpygui()



    def start_gui(self):
        self.display_thread = Thread(target=self.start_gui_function)
        self.display_thread.start()


def main():
    rclpy.init()
    executor = MultiThreadedExecutor()
    grade_display = GradeDisplay()

    executor.add_node(grade_display)
    executor.spin()

    executor.shutdown()
    grade_display.destroy_node()
    rclpy.shutdown()