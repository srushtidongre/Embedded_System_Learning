# Project 02: Button-Controlled LED

## Objective
Read a digital input (pushbutton) and use it to control a digital output (LED). The LED is ON by default, and pressing the button turns it OFF.

## Components Used
- Arduino Uno R3
- Breadboard
- Red LED
- 220Ω Resistor
- Pushbutton
- 10kΩ Resistor

## Code Explanation
- Pin 2 is set as INPUT with a 10kΩ pull-down resistor. It reads LOW when unpressed, HIGH when pressed.
- Pin 7 is set as OUTPUT for the LED.
- The code checks if Pin 2 is LOW. If it is, the LED turns ON. If the button is pressed (HIGH), the LED turns OFF.
