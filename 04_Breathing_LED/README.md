# Project 04: Breathing LED (PWM)

## Objective
Use Pulse Width Modulation (PWM) to simulate an analog voltage and smoothly fade an LED in and out.

## Components Used
- Arduino Uno R3
- Breadboard
- Red LED
- 220Ω Resistor

## How it works
- Pin 9 is a PWM-capable pin.
- The `for` loop increases a variable (`brightness`) from 0 to 255. 
- `analogWrite()` takes this number and turns the LED on and off very fast to simulate that brightness level.
- Once it reaches 255 (full brightness), the second `for` loop counts back down to 0.
