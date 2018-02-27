int state = 0;

int SW0 = 2;
int SW1 = 3;
int SW2 = 4;
int LED0 = 11;
int LED1 = 12;
int LED2 = 13;

void setup() {
  Serial.begin(9600);
  pinMode(SW0, INPUT);
  pinMode(SW1, INPUT);
  pinMode(SW2, INPUT);
  pinMode(LED0, OUTPUT);
  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
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
