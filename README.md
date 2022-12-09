# SafeRoom
This project is a device that measures temperature, humidity, and CO levels in a given room. These measurements will be displayed on a LCD screen so that the user can 
have easy access. If CO levels get past a certain threshold (>80ppm) an alarm will sound off via a speaker to capture the user's attention. There will also be suggestions
on the LCD to bring CO levels back to a safe value. Click the image to see the SafeRoom demoed.

[<img width="643" img height="780" src= "https://user-images.githubusercontent.com/59968396/206750629-c91dae94-1710-48b4-ace8-732bd4002a81.jpg">](https://www.youtube.com/watch?v=F8GIlipGR64)

# Block Diagram


<img width="643" alt="Screen Shot 2022-12-08 at 11 08 02 PM" src="https://user-images.githubusercontent.com/120158161/206628431-186bf9c8-1bf0-4ee6-9707-2c9baa91ac02.png">


# Wiring Diagram
Mbed with LCD

| mbed          | uLCD Header   | uLCD cable | External Power Supply |
| ------------- | ------------- | ---------- | --------------------- |
|               | 5V            | 5V         | 5V                    |
| TX = P28      | RX            | TX         |                       |
| RX = P27      | TX            | RX         |                       |
| P30           | Reset         | Reset      |                       |
| GND           | GND           | GND        | GND                   |

Mbed with HTU21D-F

| mbed  | HTU21D-F |
| ------------- | ------------- |
| VOUT  | 3.3V  |
| GND  | GND  |
| SDA  | P9  |
| SCL  | P10  |

Mbed with MiCS5524

| mbed  | MiCS5524 | External Power Supply |
| ------------- | ------------- | --------- |
|   | 5V  |  5V      |
| GND  | GND  | GND  |
| AO  | P18  |
| EN  | GND  |

Note: MiCS5524 can give an output voltage ranging from 0-5V. Mbed's analogin pin can only accept up to 3.3V. Must include a voltage divider to ensure max voltage
won't surpass 3.3V. This schematic uses a voltage divider of 1Mohm and 2Mohm (1Mohm in series) resistors 
<img width="643" img height="780" src= "https://user-images.githubusercontent.com/59968396/206750631-118ca5e1-bdbd-4b28-9717-eacc9e04f878.jpg">

Mbed with TPA2005D1 and speaker

| mbed  | TPA2005D1 | Speaker |
| ------------- | ------------- |-----|
| GND  | pwr-(gnd), in-  |    |    
| VOUT  | pwr+  |         |
| P26  | in+  |    |
|      | out+  |  +  |
|      | out-  |  -  |

