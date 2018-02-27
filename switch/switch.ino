void setup() {
//  Serial.begin(9600);
//  pinMode(2, INPUT);
//  pinMode(13, OUTPUT);
//  Serial.println("setup");
  pinMode(1, INPUT);
  pinMode(2, INPUT);
  pinMode(11, OUTPUT);
  pinMode(12, OUTPUT);
}

void loop() {
//   if (digitalRead(2) == 1) {
//    digitalWrite(13, HIGH);
//   } else {
//    digitalWrite(13, LOW);
//   }
  if (digitalRead(1) == 1) {
    digitalWrite(11, HIGH);
  } else {
    digitalWrite(11, LOW);
  }
    if (digitalRead(2) == 1) {
    digitalWrite(12, HIGH);
  } else {
    digitalWrite(12, LOW);
  }
}

