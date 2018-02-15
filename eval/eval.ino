int on = 1; // or 0 for off
int out = 13;
void setup() {

}

void loop() {
   if (on == 1) {
    digitalWrite(out, HIGH);
   } else {
    digitalWrite(out, LOW);
   }
}
