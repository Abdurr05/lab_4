SYSTEM_MODE(MANUAL);
SYSTEM_THREAD(ENABLED);

void setup() {
  pinMode(D7, INPUT);
  pinMode(D6,OUTPUT);

}

void loop() {
  bool value;
  value = digitalRead(D7);
  if (value == true) {
  //if the button is pressed
    digitalWrite(D6,1);
  
  } else {
  //if the button isn't pressed
    digitalWrite(D6,0);
  }
}