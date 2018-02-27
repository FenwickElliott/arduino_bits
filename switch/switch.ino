int status = 0;

void setup() {
//  Serial.begin(9600);
  pinMode(1, INPUT);
  pinMode(2, INPUT);
  pinMode(3, INPUT);
  pinMode(11, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(13, OUTPUT);
//  Serial.println("0: stopped");
}

void loop() {
  if (digitalRead(1) == HIGH && status != 1) {
//    Serial.println("1: running");
    digitalWrite(11, HIGH);
    digitalWrite(12, LOW);
    digitalWrite(13, LOW);
  }
  if (digitalRead(2) == HIGH && status != 2) {
//    Serial.println("2: ramping down");
    digitalWrite(11, LOW);
    digitalWrite(12, HIGH);
    digitalWrite(13, LOW);
  }
  if (digitalRead(3) == HIGH && status != 3) {
//    Serial.println("3: stopping");
    digitalWrite(11, LOW);
    digitalWrite(12, LOW);
    digitalWrite(13, HIGH);
  }
}
