#include <Servo.h>
#include "actuators.h"

void setup()
{
  Serial.begin(115200);

  servo_config(SHOULDER_L, 22);
  servo_config(SHOULDER_R, 25);
  servo_config(ARM_L, 26);
  servo_config(ARM_R, 27);
  servo_config(ELBOW_L, 28);
  servo_config(ELBOW_R, 29);
  servo_config(HIP_L, 30);
  servo_config(HIP_R, 32);
  servo_config(LEG_L, 33);
  servo_config(LEG_R, 34);
  servo_config(KNEE_L, 35);
  servo_config(KNEE_R, 36);

  servo_config(ANKLE_L, 37);
  servo_config(ANKLE_R, 38);
  servo_config(FOOT_L, 39);
  servo_config(FOOT_R, 40);
}

void loop()
{ 
  int pos = 0;
  
  for(pos = 45; pos <= 135; pos += 1)
  {
    servo_set(SHOULDER_L, pos);
    servo_set(SHOULDER_R, pos);
    servo_set(ARM_L, pos);
    servo_set(ARM_R, pos);
    servo_set(ELBOW_L, pos);
    servo_set(ELBOW_R, pos);
    servo_set(HIP_L, pos);
    servo_set(HIP_R, pos);
    servo_set(LEG_L, pos);
    servo_set(LEG_R, pos);
    servo_set(KNEE_L, pos);
    servo_set(KNEE_R, pos);
    servo_set(ANKLE_L, pos);
    servo_set(ANKLE_R, pos);
    servo_set(FOOT_L, pos);
    servo_set(FOOT_R, pos);
    delay(15);
  } 
  for(pos = 135; pos>=45; pos-=1)
  {                                
    servo_set(SHOULDER_L, pos);
    servo_set(SHOULDER_R, pos);
    servo_set(ARM_L, pos);
    servo_set(ARM_R, pos);
    servo_set(ELBOW_L, pos);
    servo_set(ELBOW_R, pos);
    servo_set(HIP_L, pos);
    servo_set(HIP_R, pos);
    servo_set(LEG_L, pos);
    servo_set(LEG_R, pos);
    servo_set(KNEE_L, pos);
    servo_set(KNEE_R, pos);
    servo_set(ANKLE_L, pos);
    servo_set(ANKLE_R, pos);
    servo_set(FOOT_L, pos);
    servo_set(FOOT_R, pos);
    delay(15);
  } 
}

