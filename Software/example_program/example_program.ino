//************************* ¡¡¡IMPORTANT NOTE!!! *************************//
// To use this program properly you need to change the parameter SERVOS_PER_TIMER.
// This parameter indicates the number of servos which Arduino can controls with a timer.
// SERVOS_PER_TIMER is in the file Servo.h. Change the value 12 to 16.

// ¡¡¡ADAPTED TEMPORALLY FOR ARDUINO UNO!!!

#include <Servo.h>
#include "actuators.h"

void setup()
{
  Serial.begin(115200);

  servo_config(SHOULDER_L, 2);
  servo_config(SHOULDER_R, 3);
  servo_config(ARM_L, 4);
  servo_config(ARM_R, 5);
  servo_config(ELBOW_L, 6);
  servo_config(ELBOW_R, 7);
  servo_config(HIP_L, 8);
  servo_config(HIP_R, 9);
  servo_config(LEG_L, 10);
  servo_config(LEG_R, 11);
  servo_config(KNEE_L, 12);
  servo_config(KNEE_R, 13);

  servo_config(ANKLE_L, A0); //14
  servo_config(ANKLE_R, A1); //15
  servo_config(FOOT_L, A2); //16
  servo_config(FOOT_R, A3); //17
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

