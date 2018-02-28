#include <Wire.h>
#include <Adafruit_MotorShield.h>

Adafruit_MotorShield AFMS = Adafruit_MotorShield();
Adafruit_DCMotor *M1 = AFMS.getMotor(1);

void setup() {
  Serial.begin(9600);
  Serial.println("Setting up motor control");
  AFMS.begin();
}

void loop() {
  uint8_t i;
  Serial.println("Waiting for start signal... (3 seconds)");
  delay(3000);
  Serial.println("Starting phase 0: Running");
  M1->run(FORWARD);
  M1->setSpeed(255);
  delay(5000);
  Serial.println("Starting phase 1: Ramping down");
  for(i = 254; i > 0; i--) {
    M1->setSpeed(i);
    delay(50);
  }
  delay(100000);
}
