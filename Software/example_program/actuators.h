#ifndef ACTUATORS_cpp
#define ACTUATORS_cpp

Servo shoulder_l;
Servo shoulder_r;
Servo arm_l;
Servo arm_r;
Servo elbow_l;
Servo elbow_r;
Servo hip_l;
Servo hip_r;
Servo leg_l;
Servo leg_r;
Servo knee_l;
Servo knee_r;
Servo ankle_l;
Servo ankle_r;
Servo foot_l;
Servo foot_r;

#define SHOULDER_L_POS_MIN 0
#define SHOULDER_L_POS_MAX 180
#define SHOULDER_R_POS_MIN 0
#define SHOULDER_R_POS_MAX 180
#define ARM_L_POS_MIN 0
#define ARM_L_POS_MAX 180
#define ARM_R_POS_MIN 0
#define ARM_R_POS_MAX 180
#define ELBOW_L_POS_MIN 0
#define ELBOW_L_POS_MAX 180
#define ELBOW_R_POS_MIN 0
#define ELBOW_R_POS_MAX 180
#define HIP_L_POS_MIN 0
#define HIP_L_POS_MAX 180
#define HIP_R_POS_MIN 0
#define HIP_R_POS_MAX 180
#define LEG_L_POS_MIN 0
#define LEG_L_POS_MAX 180
#define LEG_R_POS_MIN 0
#define LEG_R_POS_MAX 180
#define KNEE_L_POS_MIN 0
#define KNEE_L_POS_MAX 180
#define KNEE_R_POS_MIN 0
#define KNEE_R_POS_MAX 180
#define ANKLE_L_POS_MIN 0
#define ANKLE_L_POS_MAX 180
#define ANKLE_R_POS_MIN 0
#define ANKLE_R_POS_MAX 180
#define FOOT_L_POS_MIN 0
#define FOOT_L_POS_MAX 180
#define FOOT_R_POS_MIN 0
#define FOOT_R_POS_MAX 180

struct servo{
  Servo actuator;
  int pin;
  int pos_min;
  int pos_max;
};

servo SHOULDER_L = {shoulder_l, 0, SHOULDER_L_POS_MIN, SHOULDER_L_POS_MAX};
servo SHOULDER_R = {shoulder_r, 0, SHOULDER_R_POS_MIN, SHOULDER_R_POS_MAX};
servo ARM_L = {arm_l, 0, ARM_L_POS_MIN, ARM_L_POS_MAX};
servo ARM_R = {arm_r, 0, ARM_R_POS_MIN, ARM_R_POS_MAX};
servo ELBOW_L = {elbow_l, 0, ELBOW_L_POS_MIN, ELBOW_L_POS_MAX};
servo ELBOW_R = {elbow_r, 0, ELBOW_R_POS_MIN, ELBOW_R_POS_MAX};
servo HIP_L = {hip_l, 0, HIP_L_POS_MIN, HIP_L_POS_MAX};
servo HIP_R = {hip_r, 0, HIP_R_POS_MIN, HIP_R_POS_MAX};
servo LEG_L = {leg_l, 0, LEG_L_POS_MIN, LEG_L_POS_MAX};
servo LEG_R = {leg_r, 0, LEG_R_POS_MIN, LEG_R_POS_MAX};
servo KNEE_L = {knee_l, 0, KNEE_L_POS_MIN, KNEE_L_POS_MAX};
servo KNEE_R = {knee_r, 0, KNEE_R_POS_MIN, KNEE_R_POS_MAX};
servo ANKLE_L = {ankle_l, 0, ANKLE_L_POS_MIN, ANKLE_L_POS_MAX};
servo ANKLE_R = {ankle_r, 0, ANKLE_R_POS_MIN, ANKLE_R_POS_MAX};
servo FOOT_L = {foot_l, 0, FOOT_L_POS_MIN, FOOT_L_POS_MAX};
servo FOOT_R = {foot_r, 0, FOOT_R_POS_MIN, FOOT_R_POS_MAX};

void servo_config(servo &part, int pin)
{
  part.pin = pin;
  part.actuator.attach(pin);
}

void servo_set(servo part, int pos)
{
  if(pos < part.pos_min)
    pos = part.pos_min;
  else if(pos > part.pos_max)
    pos = part.pos_max;

  part.actuator.write(pos);
}

#endif
