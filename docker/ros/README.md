Install Cygwyn from https://www.cygwin.com/install.html

Required components are xinit, xhost, xterm

Once all is installed, start the Xwindows server with the command.
This need to be run from a Cygwin Terminal that was installed.

XWin :0 -listen tcp -multiwindow

To verify this works for Docker, in either command prompt, power shell or a cygwyn terminal run the command

docker run -e DISPLAY=host.docker.internal:0 --rm fr3nd/xeyes

success = xeyes window opens on the desktop. When the xeyes window is closed the docker container should terminate as well.

To build the ROS Docker image, go to the docker/ROS directory where you checked out this repository and run this command

docker build -t rosimg .

on successful build run docker with the follwoing command

docker run rosimg terminator

success = terminal window opens on windows desktop

in the terminal, right click and select split horizontally

In the top terminal, type

ros2 pkg list

Verify that turtlesim is in that list.

run the following command to verify the contents of the turtlesim package

ros2 pkg executables turtlesim

Verify the following list

turtlesim draw_square
turtlesim mimic
turtlesim turtle_teleop_key
turtlesim turtlesim_node

To run the simulator, in the top section of the terminal type

ros2 run turtlesim turtlesim_node

success = turtle sim window opens

To run the teleop program, in the bottom window type

ros2 run turtlesim turtle_teleop_key

follow the instructions to move the turtle

To run the rqt, the diagnostic application, split the terminal again to get a new prompt run

rqt

success = rqt window opens

From there you can open the available plugins i.e. introspection/node graph
