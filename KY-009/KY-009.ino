/*
  Demonstrates RGB LED SMD - KY-009

  Demonstrates the different states of a RGB LED by connecting the cathode to 
  ground and giving a signal (applying current) to the three signal pins with 
  a variety of PWM signals.

  Board
  Arduino UNO

  Components
  * 4 x MALE-MALE Jumper Wires

  Created By
  Christer Nordbø (@CNordbo)

  https://github.com/Cnordbo/arduino-sensor-docs

*/

// Pin value for red light
int red = 9;

// Pin value for green light
int green = 10;

// Pin value for blue light
int blue = 11;

void setup() {
  pinMode (red, OUTPUT);
  pinMode (green, OUTPUT);
  pinMode (blue, OUTPUT);
}
void loop() {
  //Only display RED
  analogWrite (red, 255);
  analogWrite (green, 0);
  analogWrite (blue, 0);
  delay(1000);
  
  //Only display GREEN
  analogWrite (red, 0);
  analogWrite (green, 255);
  analogWrite (blue, 0);
  delay(1000);
  
  //Only display BLUE
  analogWrite (red, 0);
  analogWrite (green, 0);
  analogWrite (blue, 255);
  delay(1000);
  
  //Loop trough different color blendings using PWM
  for (int val = 255; val > 0; val--)
  {
    analogWrite (red, 128-val);
    analogWrite (green, 255-val);
    analogWrite (blue, val);
    delay (10);
  }
  for (int val = 0; val < 255; val++)
  {
    analogWrite (red, 255-val);
    analogWrite (green, 128-val);
    analogWrite (blue, val);
    delay (10);
  }
}
