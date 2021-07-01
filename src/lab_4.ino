SYSTEM_MODE(MANUAL);
SYSTEM_THREAD(ENABLED);
// setup() runs once, when the device is first turned on.
void setup() {
  pinMode(D7, INPUT);
  pinMode(D6,OUTPUT);
  // Put initialization like pinMode and begin functions here.

}

// loop() runs over and over again, as quickly as it can execute.
void loop() {
bool value;
value = digitalRead(D7);
if (value == true) {
  digitalWrite(D6,1);
  // do something
} else {
  // do something else
  digitalWrite(D6,0);
}
  // The core of your code will likely live here.

}