/*
  Demonstrates Common-Cathode LED

  Demonstrates the different states of a Common-Cathode LED by connecting 
  the cathode to ground and giving a signal (applying current) to the two signal pins.

  Board: 
  * Arduino UNO

  The circuit:
  * 330 Ohm resistor
  * KY-029 - Common-Cathode RED&GREEN LED / Yin Yi 2-color LED 3mm
  * 3 x MALE-MALE Jumper Wires

  Created By
  Christer Nordbø (@CNordbo)

  https://github.com/Cnordbo/arduino-sensor-docs

*/

void setup() {
  // Signal pin for the GREEN LED
  pinMode(A0, OUTPUT);
  
  // Signal pin for RED LED
  pinMode(A1, OUTPUT);
}

void loop() {
  // Turn GREEN LED "ON" and RED LED "OFF"
  digitalWrite(A0, HIGH);
  digitalWrite(A1, LOW);
  
  // Wait 1 second before moving on
  delay(1000);

  // Turn GREEN LED "OFF" and RED LED "ON"
  digitalWrite(A0, LOW);
  digitalWrite(A1, HIGH);
  
  // Wait 1 second before moving on
  delay(1000);
  
  // Turn GREEN LED "ON" and RED LED "ON"
  // This will blend the colors, making the end result "Orange"
  digitalWrite(A0, HIGH);
  digitalWrite(A1, HIGH);

  // Wait 1 second before ending the loop, and starting from top again.
  delay(1000);
}
