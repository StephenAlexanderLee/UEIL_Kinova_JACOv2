#! /usr/bin/env python
import pose_action_client
import shlex, subprocess
import roslib; roslib.load_manifest('kinova_demo')
import rospy
import sys
import numpy as np
import actionlib
import kinova_msgs.msg
import std_msgs.msg
import geometry_msgs.msg
import math
import argparse

class jacobot:

    def __init__(self):
        # Create unique node
        rospy.init_node('jaco_controller',anonymous=True)

        # Create Publisher
        self.velocity_publisher = rospy.Publisher('j2n6s300_driver/in/catesian_velocity','kinova_msgs/PoseVelocity', queue_size = 10)
        
        # Create Subscriber
        self.pose_subscriber = rospy.Subscriber('j2n6s300_driver/out/cartesian_command',KinovaPose,self.update_pose)

        self.pose = pose()
        self.rate = rospy.Rate(10)



    def update_pose(self, data):

        self.pose = data
        self.pose.x = round(self.pose.x, 4)
        self.pose.y = round(self.pose.y, 4)
        self.pose.z = round(self.pose.z, 4)

    def euclidean_distance(self, goal_pose):
        return sqrt(pow((goal_pose.x - self.pose.x),2) + 
                    pow((goal_pose.y - self.pose.y),2) + 
                    pow((goal_pose.z - self.pose.z),2))

    def linear_vel(self, goal_pose, constant = 1.5):
        return constant * self.euclidean_distance(goal_pos)

    def moverobot(self):
        goal_pose = Pose()

        goal_pose.x = input("Set your x goal: ")
        goal_pose.y = input("Set your y goal: ")
        goal_pose.z = input("Set your z goal: ")

        distance_tolerance = input("Set your tolerance: ")

        vel_msg = kinova_msgs/PoseVelocity()

        while self.euclidean_distance(goal_pose) >= distance_tolerance:

            vel_msg.twist_linear_x = self.linear_vel(goal_pose)
            vel_msg.twist_linear_y = 0
            vel_msg.twist_linear_z = 0

            self.velocity_publisher.publish(vel_msg)

            self.rate.sleep()
        
        vel_msg.linear.x = 0
        self.velocity_publisher.publish(vel_msg)

        rospy.spin()



x = 10;
x_n = 50;
y = 10;
y_n = 50;
z = 10;
z_n = 50;

repos_x = x/2;
repos_y = y/2;
repos_z = z/2;

x_step = x/x_n;
y_step = y/y_n;
z_step = z/z_n;

total_ponts = z_n*y_n*z_n;

if __name__ == '__main__':

#    for i in range(0,x_n):
#        p = subprocess.Popen(['python','/home/bamboo/catkin_ws/src/kinova-ros/kinova_demo/nodes/kinova_demo/pose_action_client.py', '-v','-r', 'j2s6s300', 'mdeg', '0.01' ,'0.01' ,'0.01', '0', '0', '0'])

    try:
        x = jacobot()
        x.moverobot()
    except rospy.ROSInterruptException:
        pass

















