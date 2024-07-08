#ifndef LibMotorDriver_h
#define LibMotorDriver_h
#include <Arduino.h>


class LibMotorDriver {
public:
  uint8_t PWML;
  uint8_t motorpinL1;
  uint8_t motorpinL2;
  uint8_t motorpinR1;
  uint8_t motorpinR2;
  uint8_t PWMR;
  //default constructor is a constructor that either has no parameters, or if it has parameters, all the parameters have default values
  LibMotorDriver() {
  }

  LibMotorDriver(uint8_t L, uint8_t INL1, uint8_t INL2, uint8_t INR1, uint8_t INR2, uint8_t R) {
    PWML = L;
    motorpinL1 = INL1;
    motorpinL2 = INL2;
    motorpinR1 = INR1;
    motorpinR2 = INR2;
    PWMR = R;
    motor_int();
  }

  // Method
  void motor(int left, int right);
  void motor_stop_all();

private:
  void motorFL(int a);
  void motorFR(int b);
  void motorBL(int c);
  void motorBR(int d);
  // Initialize pins
  void motor_int();
};
//jubjub ju bu jubu
#endif
