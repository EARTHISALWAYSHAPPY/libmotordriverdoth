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
  Serial.println(String(analogRead(R)) + "||" + String(analogRead(L)));

  // digital mode
  //Serial.println(String(digitalRead(R)) + "||" + String(digitalRead(L)));

  delay(500);
}
