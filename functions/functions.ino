void setup() {
  Serial.begin(9600);
}

void loop() {
  myFunc();
  delay(10000);
}

void myFunc() {
  Serial.println("I've been called");
}

