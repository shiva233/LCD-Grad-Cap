# 🎓 GradCap — Shiva’s LCD Graduation Cap

A silly hardware Grad Cap for my high school graduation!


![Photo 2025-06-25, 3 38 16 PM](https://github.com/user-attachments/assets/d606d349-7ff1-4e50-9c4e-154facec567f)

Displays a typewriter-style boot-up sequence and scrolls nerdy/sentimental messages on a 16x2 LCD using an Arduino Uno and a breadboard. Powered by a 9V battery and a breadboard power supply (which provides 5V). Built to celebrate the closure of finishing high school and my next chapter as a computer engineer :D.

---

## Wiring Overview

**LCD1602 (parallel mode):**

| LCD Pin | Arduino Pin | Description         |
|---------|-------------|---------------------|
| VSS     | GND         | Ground              |
| VDD     | 5V          | Power               |
| VO      | Potentiometer middle | Contrast control |
| RS      | 12          | Register Select     |
| RW      | GND         | Write mode only     |
| EN      | 11          | Enable              |
| D4      | 5           | Data 4              |
| D5      | 4           | Data 5              |
| D6      | 3           | Data 6              |
| D7      | 2           | Data 7              |
| A (LED+) | 5V         | Backlight +         |
| K (LED-) | GND        | Backlight -         |

**Potentiometer:**
- Left pin → GND  
- Right pin → 5V  
- Middle pin → LCD VO

**Power:**
- Arduino Uno powered by USB for testing  
- 9V battery via barrel jack fon the final build

---

## Components Used
- Arduino Uno R3  
- LCD1602 display (with header pins)  
- Breadboard + jumper wires  
- 10k potentiometer (for contrast)  
- 9V battery
- Breadboard Power supply   
- Grad cap ✨  
- Velcro (for mounting)

---

## How to Build (Short Version)
1. Wire up the LCD + potentiometer (see chart above)  
2. Upload `GradCap.ino` using Arduino IDE  
3. Power with USB or 9V battery (If using a 9V battery you must convert it to 5V, I did this via a breadboard powersupply) 
4. Mount with Velcro or tape to the grad cap  
5. Smile nervously while everyone reads your screen
6. Don't forget to take everything off before throwing your grad cap in the air!

---

## Code
All logic lives in `GradCap.ino`  
- Boot-up sequence in `setup()`  
- Scrolling message loop in `loop()`  
- Bottom row displays emoticons

---

## Demo Video

https://github.com/user-attachments/assets/086d1045-7b06-4fa1-8e97-30b01c1466a7

---

## Why I Made This
This was my way of saying goodbye to high school and welcoming the next chapter of my life as a computer engineer who is going to build a bunch of silly and goofy things :D

---
