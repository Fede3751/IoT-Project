from launch import LaunchDescription
from launch_ros.actions import Node



def generate_launch_description():
  
  return LaunchDescription([

    # Spawn a controller for each of the drone, in the
    # correct namespace
    Node(
      package='iot_project_solution',
      executable='drone_controller',
      namespace="X3_0",
      output='screen',
      emulate_tty=True,
      name='iot'
    ),
    Node(
      package='iot_project_solution',
      executable='drone_controller',
      namespace="X3_1",
      output='screen',
      emulate_tty=True,
      name='iot'
    ),
    Node(
      package='iot_project_solution',
      executable='drone_controller',
      namespace="X3_2",
      output='screen',
      emulate_tty=True,
      name='iot'
    ),

    # Spawn a task assigner outside the three namespaces.
    # The task assigner should be able to communicate with
    # all the three drones and submit the correct goals to achieve
    Node(
      package='iot_project_solution',
      executable='task_assigner',
      output='screen',
      emulate_tty=True,
      name='iot'
    )
    
  ])