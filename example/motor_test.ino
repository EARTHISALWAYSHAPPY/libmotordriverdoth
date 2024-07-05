#include <libmotordriver.h>
LibMotorDriver motor_ctrl;
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
