#include "libmotordriver.h"
#define L A2
#define INL1 2
#define INL2 3
#define INR1 4
#define INR2 5
#define R A3
LibMotorDriver motor_ctrl(L, INL1, INL2, INR1, INR2, R);
void setup() {

  Serial.begin(9600);
}
void loop() {
  int Rl = analogRead(L);
  int Rr = analogRead(R);
  //forword
  if (Rl == 0 && Rr == 0) {    //fix value ir
    motor_ctrl.motor(45, 45);    //fix speed
  }
  //turn left
  if (Rl == 1  && Rr == 0) {    //fix value ir
    motor_ctrl.motor(-30, 75);   //fix speed
  }
  //turn right
  if (Rl == 0  && Rr == 1) {   //fix value ir
    motor_ctrl.motor(75, -30);  //fix speed
  }
}
