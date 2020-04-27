/*
  RobotPatient Simulators BV
  Test for Breath Circuit
  V1.1 April 23, 2020
*/

#define NeoPixel 18 // note: not all models have a NeoPixel fitted.
#define HBLed 14

// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(HBLed, OUTPUT);
  initNeoPixel();
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(HBLed, LOW);
  //setNeoPixel();
  delay(1000);
  digitalWrite(HBLed, HIGH);
  //setNeoPixel();
  delay(1000);
}
