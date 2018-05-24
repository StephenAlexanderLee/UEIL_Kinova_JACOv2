# UEIL_Kinova_JACOv2

## Installation 

### 1. Install ROS Lunar Loggerhead

#### 1.1 Setup the sources.list

```
sudo sh -c 'echo "deb http://packages.ros.org/ros/ubuntu $(lsb_release -sc) main" > /etc/apt/sources.list.d/ros-latest.list'
```

#### 1.2 Set up your keys

```
sudo apt-key adv --keyserver hkp://ha.pool.sks-keyservers.net:80 --recv-key 421C365BD9FF1F717815A3895523BAEEB01FA116
```

#### 1.3 Installation

```
sudo apt-get update
sudo apt-get install ros-lunar-desktop-full
```

#### 1.4 Initialize rosdep

```
sudo rosdep init
rosdep update
```

#### 1.5 Environment setup

```
echo "source /opt/ros/lunar/setup.bash" >> ~/.bashrc
source ~/.bashrc
```

#### 1.6 Dependencies for building packages

```
sudo apt-get install python-rosinstall python-rosinstall-generator python-wstool build-essential
```

#### 1.7 Install Moveit ROS
```
sudo apt-get install ros-lunar-moveit
source /opt/ros/lunar/setup.bash
```

#### 2. Install Kinova-ROS

```
mkdir ~/catkin_ws/src
cd ~/catkin_ws/src
git clone https://github.com/Kinovarobotics/kinova-ros.git kinova-ros
cd ~/catkin_ws
```

**Important: must edit c++ files and replace the following**

change `success = move_group.move();` to `success = static_cast<bool>(move_group.move());` in the following files:
- `~/catkin_ws/src/kinova-ros/kinova_moveit/kinova_arm_moveit_demo/src/motion_plan.cpp`
- `~/catkin_ws/src/kinova-ros/kinova_moveit/kinova_arm_moveit_demo/src/pick_place.cpp`
- `~/catkin_ws/src/kinova-ros/kinova_moveit/kinova_arm_moveit_demo/src/test_accuracy.cpp`
- `~/catkin_ws/src/kinova-ros/kinova_moveit/kinova_arm_moveit_demo/src/work_scene.cpp`

make ROS packages using:
```
catkin_make
```

for usb access

```
sudo cp ~/catkin_ws/src/kinova_driver/udev/10-kinova-arm.rules /etc/udev/rules.d/
```

Make sure the workspace is properly overlayed by the setup script.
```
source devel/setup.bash
echo $ROS_PACKAGE_PATH /home/bamboo/catkin_ws/src:/opt/ros/lunar/share
```


