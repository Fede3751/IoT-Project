# IoT-Project - Early Version v0.2

<p align="center">
  <img src="https://fede3751.github.io/IoT_lectures/imgs/project/project_splashart.png">
</p>

Official repository for the IoT project.

You are required to perform a patrolling task on the given target points.
Each target has a certain amount of time in which it has to be patrolled.
If a drone does not patrol a target in the given time, the target is considered "expired".

At each second, you get a score of 1 point for every target which is not expired.
You can get points for a total of 120 seconds of simulation time.

NOTE: The way the scoring is currently calculated and the simulation environment will probably change once we officially present the project in class. But a good solution to this grader will probably yeld a good solution for the final version.
The final challenge will be composed of multiple stages with different targets' positions.
Feel free to use this version of the project to get used to the topics and services used in this simulation.

Can you write a code to achieve the best score?

## Launching the Simulation

You can start the project just by running:

```
./start
```
This will automatically compile your solution package, source the environment, and launch the simulation.<br><br>

## Package Organization

The workspace is composed of multiple packages:<br><br>
**iot_project**<br>
  &emsp; Wraps all the other packages together and exposes one launch file to launch the whole simulation<br>
**iot_project_tester**<br>
  &emsp; Responsable of keeping track of drones and target positiond and update simulation values correctly<br>
**iot_project_grader**<br>
  &emsp; Used to visualize the current score, by reading values outputted by the tester<br>
**iot_project_target_animator**<br>
  &emsp; C++ package currently used only to change color of the sphere in the simulation<br>
**iot_project_interfaces**<br>
  &emsp; Stores all the interfaces used in this workspace<br>
**iot_project_solution**<br>
  &emsp; Package for storing your solution to the project<br><br>

## Solution Submission

Your solution should go in:

```
/src/iot_project_solution
```
The package already includes some files set for you.<br>
Note that files outside this package won't be considered for your submission.


Good luck!
