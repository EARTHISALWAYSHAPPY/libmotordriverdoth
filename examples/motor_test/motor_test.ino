#include "libmotordriver.h"
#define L 9
#define INL1 2
#define INL2 3
#define INR1 4
#define INR2 5
#define R 10
LibMotorDriver motor_ctrl(L, INL1, INL2, INR1, INR2, R);
void setup() {

}
void loop() {
  motor_ctrl.motor(100, 100);
  delay(1000);
  motor_ctrl.motor(100, -100);
  delay(1000);
  motor_ctrl.motor(-100, 100);
  delay(1000);
  motor_ctrl.motor(-100, -100);
  delay(1000);
  motor_ctrl.motor_stop_all();
  delay(1000);
}
