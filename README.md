# IoT-Project

<p align="center">
  <img src="https://fede3751.github.io/IoT_lectures/imgs/project/project_splashart.png">
</p>

Official repository for the IoT project.

You are required to perform a patrolling task on the given target points.
Each target has a certain amount of time in which it has to be patrolled.
If a drone does not patrol a target in the given time, the target is considered "expired".

At each second, you get a score of 1 point for every target which is not expired.
You can get points for a total of 120 seconds of simulation time.

NOTE: The way the scoring is currently calculated will probably change once we officially present the project in class. But a good solution to this grader will probably yeld a good solution for the final version.
The final challenge will be composed of multiple stages with different targets' positions.
Feel free to use this version of the project to get used to the topics and services used in this simulation.

Can you write a code to achieve the best score?



You can start the project just by running:

```
./start
```
This will automatically compile your solution package, source the environment, and launch the simulation.


<br>
A full simulation is composed of multiple executables:<br>
-The Gazebo simulation.<br>
-Mutiple ros_gz_bridge nodes which link the simulation to the ROS environment.<br>
-A ROS Tester node which keeps track of the positions of the drones and stores information in order to compute a score.<br>
-A ROS Grader node which displays in a window your current score (by using DearPyGui libraries for the graphics).<br>
-Your ROS Solution, ideally composed of multiple ROS Drone Controller nodes, and one ROS Task Assigner node to give instruction to the drones.<br><br>



Your solution should go in:

```
/src/iot_project_solution
```
The package already includes some files set for you.
Note that files outside this package won't be considered for your submission.


Good luck!
