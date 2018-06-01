#!/bin/bash

echo "time in between points: $1"
echo "Xsize: $2"
echo "Ysize: $3"
echo "Zsize: $4"
echo "X number of points: $5"
echo "Y number of points: $6"
echo "Z number of points: $7"
echo "angle 1: $8"
echo "angle 2: $9"
echo "angle 3: ${10}"

rosrun kinova_userscripts raster3D.py -v -r j2s6s300 -- mdeg $1 $2 $3 $4 $5 $6 $7 $8 $9 ${10}