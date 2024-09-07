#define R A0
#define L A1
// #define R 2
// #define L 3
void setup() {
  Serial.begin(9600);
  // pinMode(R, INPUT);
  // pinMode(L, INPUT);
}

void loop() {
  // analog mode
  Serial.println(analogRead(R) + "||" + analogRead(L));
  // digital mode
  //Serial.println(digitalRead(R) + "||" + digitalRead(L));
}
