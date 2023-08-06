# INPUTS-AND-OUTPUTS-BUTTON-LED-ESP32

A simple program to turn an LED on and off with a button using an ESP32.

## General Information

### Wiring Diagram

https://github.com/leolinkebrown/INPUTS-AND-OUTPUTS-BUTTON-LED-ESP32/blob/8d7693c1825fe0bfc2d9c2b45387680065580f3c/PXL_20230806_051209003.jpg

### Demonstration

https://github.com/leolinkebrown/INPUTS-AND-OUTPUTS-BUTTON-LED-ESP32/blob/2882dd9bb455a3c743d2d26579b2684b490093a3/PXL_20230806_051219536.mp4

### Code Explanation

First, the variables for the button and LED pins are set to 4 and 5 respectively. Then, a variable determining the status of the button is set. After that, in the setup function, the baud is set to 9600, the button is initialized as the input and the LED is initialized as the output. Next, in the loop function, the state of the button value is read and printed to the serial monitor. It checks if the button is pressed and, if it is, the button state is set to HIGH, turning the LED on, if not, the LED is set to off.

## Technologies

### Project is Created With:

- Arduino IDE 2.1.1
- 1x ESP32 Development Board 30 pins
- 1x Red LED
- 2x Capacitor
- 5x Wires
- 1x Button
- 1x USB-C Cable

## Setup

- Download Arduino IDE
- Wire ESP32 board as shown in 'Wiring Diagram'
- Input code in 'INPUTS-AND-OUTPUTS-BUTTON-LED-ESP32.ino' under 'Main'
- Enjoy!
