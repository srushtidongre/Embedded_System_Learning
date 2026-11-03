# Project 03: Potentiometer Dimmer

## Objective
Learn how to read an analog signal (0V to 5V) using a potentiometer and use that value to control the blink speed of an LED.

## Components Used
- Arduino Uno R3
- Breadboard
- Red LED
- 220Ω Resistor
- Potentiometer
- Jumper wires

## How it works
- The potentiometer acts as a voltage divider. Turning the knob changes the voltage sent to Analog Pin A0 from 0V to 5V.
- The Arduino's `analogRead()` converts this voltage into a number between 0 and 1023.
- The code saves this number in a variable called `knobValue`.
- The `delay(knobValue)` function uses this number to pause the program. A low number (0) makes the LED blink very fast, and a high number (1023) makes it blink very slowly.
- The `Serial.println()` command prints the number to the computer so we can see it in the Serial Monitor.
