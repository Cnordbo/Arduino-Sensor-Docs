# Arduino Sensor Documentation
Documentation and Examples for various arduino sensors and components! 

# Keyes Sensors covered
- [ ] Temperature sensor module KY-001
- [ ] Vibration switch module KY-002
- [ ] Hall magnetic sensor module KY-003
- [ ] Key switch module KY-004
- [ ] Infrared emission sensor module KY-005
- [ ] Small passive buzzer module KY-006
- [ ] Laser sensor module KY-008
- [ ] 3-color full-color LED SMD modules KY-009
- [ ] Optical broken module KY-010
- [x] [2-color LED module KY-011](./KY-011/)
- [ ] Active buzzer module KY-012
- [ ] Temperature sensor module KY-013
- [ ] Temperature and humidity sensor module KY-015
- [x] [3-color LED module KY-016](./KY-016/)
- [ ] Mercury open optical module KY-017
- [ ] Photo resistor module KY-018
- [ ] 5V relay module KY-019
- [ ] Tilt switch module KY-020
- [ ] Mini magnetic reed modules KY-021
- [ ] Infrared sensor receiver module KY-022
- [ ] XY-axis joystick module KY-023
- [ ] Linear magnetic Hall sensors KY-024
- [ ] Reed module KY-025
- [ ] Flame sensor module KY-026
- [ ] Magic light cup module KY-027
- [ ] Temperature sensor module KY-028
- [x] [Yin Yi 2-color LED module 3MM KY-029](./KY-029/)
- [ ] Hit sensor module KY-031
- [ ] Obstacle avoidance sensor module KY-032
- [ ] Hunt sensor module KY-033
- [ ] Automatic flashing colorful LED module KY-034
- [ ] Class Bihor magnetic sensor KY-035
- [ ] Metal touch sensor module KY-036
- [ ] Sensitive microphone sensor module KY-037
- [ ] Microphone sound sensor module KY-038
- [ ] Detect the heartbeat module KY-039
- [ ] Rotary encoder module KY-040

# Others
- [ ] -

# How to contribute
1) Fork
2) Copy the [Template](Template) folder and rename to the sensor name
3) Fill in the README file with correct information
4) Include a `.ino` sketch with your code. 
5) Include a Fritzing image of your circuit. ( http://fritzing.org/home/ ) 
6) Submit a PR.

# Coding rules
1) Component \ Sensor should only document itself, and should therefore not include any other sensors / modules, unless required to function. 
2) Code should not be copied from any media source that might be protected by copyright. 
3) Read an follow the [Arduino Style Guide](https://www.arduino.cc/en/Reference/StyleGuide)
4) "Efficiency is not paramount; readability is." - Arduino Styleguide
5) Avoid using libraries for what can be considered as simple components 
   - If using a library is neccessary, introduce the user to it in the readme with links to documentation. 
