#!/bin/bash


echo "X: $1"
echo "Y: $2"
echo "Z: $3"
echo "theta: $4"
echo "phi: $5"
echo "psi: $6"

rosrun kinova_demo pose_action_client.py -v -r j2s6s300 mdeg -- $1 $2 $3 $4 $5 $6

