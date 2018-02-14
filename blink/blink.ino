int pinNum = 13; // pin 13 illuminates LED

void setup() {
  pinMode(pinNum, OUTPUT);
}

void loop() {
  digitalWrite(pinNum, HIGH);
  delay(500);
  digitalWrite(pinNum, LOW);
  delay(500);
}