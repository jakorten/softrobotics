/*
  RobotPatient Simulators BV
  Test for Breath Circuit

*/

#define PumpA  6 // PA20
#define PumpB  7 // PA21
#define ValveA 2 // PA14
#define ValveB 5 // PA15

// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(PumpA, OUTPUT);
  pinMode(PumpB, OUTPUT);
  pinMode(ValveA, OUTPUT);
  pinMode(ValveB, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
   blinkLeds();
}

void ledsOn() {
  digitalWrite(PumpA, HIGH);
  digitalWrite(PumpB, HIGH);
  digitalWrite(ValveA, HIGH);
  digitalWrite(ValveB, HIGH);
}

void blinkLeds() {
  digitalWrite(ValveA, HIGH);
  digitalWrite(ValveB, LOW);
  digitalWrite(PumpA, LOW);
  digitalWrite(PumpB, LOW);
  delay(100);
  digitalWrite(ValveA, LOW);
  digitalWrite(ValveB, HIGH);
  digitalWrite(PumpA, LOW);
  digitalWrite(PumpB, LOW);
  delay(100);
  digitalWrite(ValveA, LOW);
  digitalWrite(ValveB, LOW);
  digitalWrite(PumpA, HIGH);
  digitalWrite(PumpB, LOW);
  delay(100);
  digitalWrite(ValveA, LOW);
  digitalWrite(ValveB, LOW);
  digitalWrite(PumpA, LOW);
  digitalWrite(PumpB, HIGH);
  delay(100);
}
