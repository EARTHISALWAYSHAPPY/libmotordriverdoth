#ifndef LibMotorDriver_h
#define LibMotorDriver_h
#include <Arduino.h>
#define L 9
#define INL1 2
#define INL2 3
#define INR1 4
#define INR2 5
#define R 10

class LibMotorDriver {
  public:
    LibMotorDriver();
    void motor(int left, int right);
    void motor_stop_all();

  private:
    const int PWML = L;
    const int motorpinL1 = INL1;
    const int motorpinL2 = INL2;
    const int motorpinR1 = INR1;
    const int motorpinR2 = INR2;
    const int PWMR = R;
    void motorFL(int a);
    void motorFR(int b);
    void motorBL(int c);
    void motorBR(int d);
    void motor_int();
};

#endif
