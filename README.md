# IoT-Project

![Alt Text](https://fede3751.github.io/IoT_lectures/imgs/lecture_6/x3_swarming.gif)

Repository for the IoT project.

You are required to perform a patrolling task on the given target points.
Each target has a certain amount of time in which it has to be patrolled.
If a drone does not patrol a target in the given time, the target is considered "expired".

At each second, you get a score of 1 point for every target which is not expired.
You can get points for a total of 120 seconds of simulation time.

NOTE: The way the scoring is currently calculated will probably change once we officially present the project in class. But a good solution to this grader will probably yeld a good solution for the final version.
Feel free to use this version of the project to get used to the topics and services used in this simulation.

Can you write a code to achieve the best score?



You can start the project just by running:

```
./start
```
This will automatically compile your solution package, source the environment, and launch the simulation.



Your solution should go in:

```
/src/iot_project_solution
```
