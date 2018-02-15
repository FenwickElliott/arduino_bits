void setup() {
  Serial.begin(9600);
  pinMode(2, INPUT);
  pinMode(10, OUTPUT);
  Serial.println("setup");
}

void loop() {
   if (digitalRead(2) == 1) {
    digitalWrite(10, HIGH);
   } else {
    digitalWrite(10, LOW);
   }
}

