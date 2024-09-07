#include "libmotordriver.h"
#define L 2
#define INL1 2
#define INL2 3
#define INR1 4
#define INR2 5
#define R 3
LibMotorDriver motor_ctrl(L, INL1, INL2, INR1, INR2, R);
void setup() {

  Serial.begin(9600);
  pinMode(L, INPUT);
  pinMode(R, INPUT);
}
void loop() {
  bool Rl = digitalRead(L);
  bool Rr = digitalRead(R);
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
