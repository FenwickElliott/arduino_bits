int i;

int SW[] = {2,3,4};
int LED[] = {10, 11, 12};

void setup() {
  for(i = 0; i < sizeof(SW) / sizeof(int); i++) {
    pinMode(SW[i], INPUT);
  }
  for(i = 0; i < sizeof(LED) / sizeof(int); i++) {
    pinMode(LED[i], OUTPUT);
  }    
}

void loop() {
  
}

