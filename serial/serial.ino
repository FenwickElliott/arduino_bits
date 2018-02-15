int i = 0;

void setup() {
  Serial.begin(9600);
  Serial.println("setup complete");
}

void loop() {
  Serial.println(i);
  delay(1000);
}