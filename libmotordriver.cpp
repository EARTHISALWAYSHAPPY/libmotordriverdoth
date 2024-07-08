#include "libmotordriver.h"


void LibMotorDriver::motor_int() {
  pinMode(PWML, OUTPUT);
  pinMode(motorpinL1, OUTPUT);
  pinMode(motorpinL2, OUTPUT);
  pinMode(motorpinR1, OUTPUT);
  pinMode(motorpinR2, OUTPUT);
  pinMode(PWMR, OUTPUT);
}

void LibMotorDriver::motorFL(int a) {
  digitalWrite(motorpinL1, HIGH);
  digitalWrite(motorpinL2, LOW);
  analogWrite(PWML, map(a, 0, 100, 0, 255));
}

void LibMotorDriver::motorFR(int b) {
  digitalWrite(motorpinR1, HIGH);
  digitalWrite(motorpinR2, LOW);
  analogWrite(PWMR, map(b, 0, 100, 0, 255));
}

void LibMotorDriver::motorBL(int c) {
  digitalWrite(motorpinL1, LOW);
  digitalWrite(motorpinL2, HIGH);
  analogWrite(PWML, map(c, 0, 100, 0, 255));
}

void LibMotorDriver::motorBR(int d) {
  digitalWrite(motorpinR1, LOW);
  digitalWrite(motorpinR2, HIGH);
  analogWrite(PWMR, map(d, 0, 100, 0, 255));
}

void LibMotorDriver::motor(int left, int right) { //function control duo motor Left and Right
  if (left < 0) {
    motorBL(-left);
  } else {
    motorFL(left);
  }
  if (right < 0) {
    motorBR(-right);
  } else {
    motorFR(right);
  }
}

void LibMotorDriver::motor_stop_all() { //function stop all motor
  digitalWrite(motorpinL1, HIGH);
  digitalWrite(motorpinL2, LOW);
  analogWrite(PWML, 0);
  digitalWrite(motorpinR1, HIGH);
  digitalWrite(motorpinR2, LOW);
  analogWrite(PWMR, 0);
}
