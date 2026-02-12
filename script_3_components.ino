#include <Adafruit_MPU6050.h>
#include <Adafruit_Sensor.h>
#include <Wire.h>

Adafruit_MPU6050 mpu;

void setup(void) {
  Serial.begin(115200);
  while (!Serial) delay(10); 

  if (!mpu.begin()) {
    Serial.println("Error: accelerometer not found!");
    while (1) yield();
  }

  mpu.setAccelerometerRange(MPU6050_RANGE_2_G);
  mpu.setFilterBandwidth(MPU6050_BAND_5_HZ);
}

void loop() {
  sensors_event_t a, g, temp;
  mpu.getEvent(&a, &g, &temp);

  Serial.print("X:"); Serial.print(a.acceleration.x);
  Serial.print(",");
  Serial.print("Y:"); Serial.print(a.acceleration.y);
  Serial.print(",");
  Serial.print("Z:"); Serial.println(a.acceleration.z - 9.81); //We subtract the gravitational acceleration

  delay(10); 
}



