uint8_t PWML = 6;
uint8_t motorpinL1 = 2;
uint8_t motorpinL2 = 3;
uint8_t motorpinR1 = 4;
uint8_t motorpinR2 = 5;
uint8_t PWMR = 7;
void motor_int(uint8_t PWML, uint8_t motorpinL1, uint8_t motorpinL2, uint8_t motorpinR1, uint8_t motorpinR2, uint8_t PWMR)
{
  pinMode(PWML, OUTPUT);
  pinMode(motorpinL1, OUTPUT);
  pinMode(motorpinL2, OUTPUT);

  pinMode(motorpinR1, OUTPUT);
  pinMode(motorpinR2, OUTPUT);
  pinMode(PWMR, OUTPUT);
}
void motorFL(int a)
{

  digitalWrite(motorpinL1, HIGH);
  digitalWrite(motorpinL2, LOW);
  analogWrite(PWML, map(a, 0, 100, 0, 255));
}

void motorFR(int b)
{

  digitalWrite(motorpinR1, HIGH);
  digitalWrite(motorpinR2, LOW);
  analogWrite(PWMR, map(b, 0, 100, 0, 255));
}
void motorBL(int c)
{

  digitalWrite(motorpinL1, LOW);
  digitalWrite(motorpinL2, HIGH);
  analogWrite(PWML, map(c, 0, 100, 0, 255));
}

void motorBR(int d)
{

  digitalWrite(motorpinR1, LOW);
  digitalWrite(motorpinR2, HIGH);
  analogWrite(PWMR, map(d, 0, 100, 0, 255));
}
void motor(int left, int right)
{
  if (left < 0)
  {
    motorBL(-left);
  }
  else
  {
    motorFL(left);
  }
  if (right < 0)
  {
    motorBR(-right);
  }
  else
  {
    motorFR(right);
  }
}
void motor_stop_all()
{
  digitalWrite(motorpinL1, HIGH);
  digitalWrite(motorpinL2, LOW);
  analogWrite(PWML, 0);
   digitalWrite(motorpinR1, HIGH);
  digitalWrite(motorpinR2, LOW);
  analogWrite(PWMR, 0);
}
