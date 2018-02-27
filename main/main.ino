int i;
int state = 2;

int SW[] = {2,3,4};
int LED[] = {10, 11, 12};

void setup() {
  Serial.begin(9600);
  for(i = 0; i < sizeof(SW) / sizeof(int); i++) {
    pinMode(SW[i], INPUT);
  }
  for(i = 0; i < sizeof(LED) / sizeof(int); i++) {
    pinMode(LED[i], OUTPUT);
  }
  Serial.println("Set up complete!");
  Serial.print("State: ");
  Serial.println(state);
}

void loop() {
    for(i = 0; i < sizeof(SW) / sizeof(int); i++) {
    if(digitalRead(SW[i]) == HIGH) {
      digitalWrite(LED[i], HIGH);
    } else {
      digitalWrite(LED[i], LOW);
    }
  }
}
