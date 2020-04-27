/*
  RobotPatient Simulators BV
  Test for Breath Circuit
  V1.1 April 23, 2020

  Note: Version for small board 
*/

#define PumpA  6 // PA20
// #define PumpB  7 // PA21 - not available for the small board version
#define ValveA 2 // PA14 
// #define ValveB 5 // PA15 - not available for the small board version

// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(PumpA, OUTPUT);
  pinMode(ValveA, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
   blinkLeds();
}

void ledsOn() {
  digitalWrite(PumpA, HIGH);
  digitalWrite(ValveA, HIGH);
}

void blinkLeds() {
  digitalWrite(ValveA, HIGH);
  digitalWrite(PumpA, HIGH);
  delay(2000);
  digitalWrite(ValveA, LOW);
  digitalWrite(PumpA, LOW);
  delay(2000);
}
