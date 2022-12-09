# SafeRoom
This project is a device that measures temperature, humidity, and CO levels in a given room. These measurements will be displayed on a LCD screen so that the user can 
have easy access. If CO levels get past a certain threshold (>80ppm) an alarm will sound off via a speaker to capture the user's attention. There will also be suggestions
on the LCD to bring CO levels back to a safe value.


# Block Diagram


<img width="643" alt="Screen Shot 2022-12-08 at 11 08 02 PM" src="https://user-images.githubusercontent.com/120158161/206628431-186bf9c8-1bf0-4ee6-9707-2c9baa91ac02.png">


# Wiring Diagram
Mbed with LCD

| mbed          | uLCD Header   | uLCD cable |          
| ------------- | ------------- | ---------- |
| 5V = VU       | 5V            | 5V         | 
| TX = P28      | RX            | TX         |
| RX = P27      | TX            | RX         |
| P30           | Reset         | Reset      |

Mbed with HTU21D-F

| mbed  | HTU21D-F |
| ------------- | ------------- |
| VOUT  | 3.3V  |
| GND  | GND  |
| SDA  | P9  |
| SCL  | P10  |
