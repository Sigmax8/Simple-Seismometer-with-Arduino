# Simple-Seismometer-with-Arduino
Simple construction of a seismometer using Arduino platform and accelerometer.

Bills of Materials:
- 1x Arduino UNO
- 1x accelerometer MPU-6050

Hardware Scheme:
![Schema Hardware](hardware_scheme.png)

Libraries used:
- <Adafruit_MPU6050.h>
- <Wire.h>

I created two versions of the script. The first one plots the x, y and z components of acceleration,
while the second one compute the vectorial sum of them, plotting a single line.
