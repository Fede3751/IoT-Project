from launch import LaunchDescription
from launch_ros.actions import Node



def generate_launch_description():
  
  return LaunchDescription([

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
      executable='task_assigner',
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
      executable='task_assigner',
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
    Node(
      package='iot_project_solution',
      executable='task_assigner',
      namespace="X3_2",
      output='screen',
      emulate_tty=True,
      name='iot'
    )
    
  ])