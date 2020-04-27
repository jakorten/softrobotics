/*
 * Sensor test for small breath board
 * J.A. Korten
 * April, 23 - 2020
*/

// These constants won't change. They're used to give names to the pins used:
const int analogInPin = A1;  // Analog input pin that the potentiometer is attached to

int sensorValue = 0;        // value read from the pot

void setup() {
  // initialize serial communications at 115200 bps:
  Serial.begin(115200);
  analogReadResolution(12); // SAMD21 has 12 bit analog ADC
}

void loop() {
  // read the analog in value:
  sensorValue = analogRead(analogInPin);
 
  // print the results to the Serial Monitor:
  Serial.print("sensor = ");
  Serial.println(sensorValue);

  // wait 20 milliseconds before the next loop for the analog-to-digital
  // converter to settle after the last reading:
  delay(20);
}
