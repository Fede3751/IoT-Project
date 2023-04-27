from launch import LaunchDescription
from launch_ros.actions import Node

from launch_ros.substitutions import FindPackageShare
from launch.actions import IncludeLaunchDescription
from launch.launch_description_sources import PythonLaunchDescriptionSource
from launch.substitutions import PathJoinSubstitution
from random import randint

WORLD_NAME = "iot_project_world"

X_POS = [-5, -5, 7, 3, 5]
Y_POS = [-5, 2, 7, -5, 5]
Z_POS = [3, 5, 7, 6, 7]
TIMES = [30, 30, 30, 30, 25]

NO_DRONES = 3
NO_TARGETS = 5


#-----------------------------------------------------------------------------------------------
# Launch file for the IoT Project. Launches all the nodes required to start the final solution
#-----------------------------------------------------------------------------------------------

def generate_launch_description():

  targets = []
    
  for i in range(NO_TARGETS):
  
  
    x_pos = X_POS[i]
    y_pos = Y_POS[i]
    z_pos = Z_POS[i]
    time  = TIMES[i]

    targets.append((x_pos, y_pos, z_pos, time))


  #------------------- Launch Gazebo here, with the iot_project_world world --------------------
  targets_to_spawn = [
      IncludeLaunchDescription(
        PythonLaunchDescriptionSource([
          PathJoinSubstitution([
              FindPackageShare('ros_gz_sim'),
              'launch/'
              'gz_sim.launch.py',
          ])
        ]),
        launch_arguments={
          'gz_args' : './gazebo_resources/project_world.sdf'
        }.items()
      )
  ]

  #------------------------------ Bridge for the simulation clock ------------------------------
  targets_to_spawn.append(
    Node(
      package="ros_gz_bridge",
      executable="parameter_bridge",
      arguments=[
        "/world/%s/clock@rosgraph_msgs/msg/Clock@ignition.msgs.Clock" % WORLD_NAME
      ]
    )
  )


  #--------------- Bridges for all the cmd_vel and odometry topics of the drones ---------------
  for i in range(NO_DRONES):
    targets_to_spawn.append(
      Node(
        package="ros_gz_bridge",
        executable="parameter_bridge",
        arguments=[
          "/X3_"+str(i)+"/cmd_vel@geometry_msgs/msg/Twist@ignition.msgs.Twist"
        ]
      )
    )
    targets_to_spawn.append(
      Node(
        package="ros_gz_bridge",
        executable="parameter_bridge",
        arguments=[
          "/X3_"+str(i)+"/odometry@nav_msgs/msg/Odometry@ignition.msgs.Odometry"
        ]
      )
    )

  #---------------------------- Spawns targets inside the simulation ---------------------------
  for i in range(NO_TARGETS):


    targets_to_spawn.append(
          Node(
          package='ros_gz_sim',
          executable='create',
          arguments= [
              '-world',
              WORLD_NAME,
              '-file',
              './gazebo_resources/target_obj_blue.sdf',
              "-name",
              "target_"+str(i),
              "-x",
              str(targets[i][0]),
              "-y",
              str(targets[i][1]),
              "-z",
              str(targets[i][2])
          ],
          name='sim'
      )
    )

  positions = []
  for target in targets:
    positions.append(str(target[0]))
    positions.append(str(target[1]))
    positions.append(str(target[2]))
    positions.append(str(target[3]))


  #-------------------------------- Tester and grader are started here -------------------------
  targets_to_spawn.append(
    Node(
      package='iot_project_tester',
      executable='target_handler',
      arguments=positions,
      output='screen',
      emulate_tty=True,
      name='iot'
    )
  )

  targets_to_spawn.append(
    Node(
      package='iot_project_grader',
      executable='display',
      output='screen',
      emulate_tty=True,
      name='iot'
    )
  )


  #------------------------- Finally, launch the solution launch file --------------------------


  targets_to_spawn.append(
    IncludeLaunchDescription(
      PythonLaunchDescriptionSource([
        PathJoinSubstitution([
            FindPackageShare('iot_project_solution'),
            'launch.py',
        ])
      ])
    )
  )

  #---------------------------------------------------------------------------------------------




  return LaunchDescription(targets_to_spawn)
