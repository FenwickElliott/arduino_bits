int i;
int state = 0;

int SW0 = 2;
int SW1 = 3;
int SW2 = 4;
int LED0 = 11;
int LED1 = 12;
int LED2 = 13;

int switches[] = {SW0, SW1, SW2};
int LEDs[] = {LED0, LED1, LED2};

void setup() {
  Serial.begin(9600);
  for (i = 0; i < 3; i++) {
    pinMode(switches[i], INPUT);
  }
  for (i = 0; i < 3; i++) {
    pinMode(LEDs[i], OUTPUT);
  }
  Serial.println("0: stopped");
}

void loop() {
  if (digitalRead(SW0) == HIGH && state != 1) {
    state = 1;
    Serial.println("1: running");
    digitalWrite(LED0, HIGH);
    digitalWrite(LED1, LOW);
    digitalWrite(LED2, LOW);
  }
  if (digitalRead(SW1) == HIGH && state != 2) {
    state = 2;
    Serial.println("2: ramping down");
    digitalWrite(LED0, LOW);
    digitalWrite(LED1, HIGH);
    digitalWrite(LED2, LOW);
  }
  if (digitalRead(SW2) == HIGH && state != 3) {
    state = 3;
    Serial.println("3: stopping");
    digitalWrite(LED0, LOW);
    digitalWrite(LED1, LOW);
    digitalWrite(LED2, HIGH);
  }
}
