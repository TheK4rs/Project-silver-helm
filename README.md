# Project Silver Helm

A wearable Daft Punk–inspired LED helmet featuring a programmable scrolling visor, RGB lighting, and wireless control.

---

## Overview

Project Silver Helm is a wearable embedded systems project designed as part of the **Hack Club Fallout program**. It combines electronics, firmware, and 3D design into a fully integrated helmet system.

The helmet includes:
- A scrolling LED matrix visor for dynamic text display
- Addressable RGB lighting for visual effects
- Bluetooth control via smartphone
- A modular internal electronics system

This project focuses on real-world system design — integrating hardware, software, and physical structure into a cohesive product.

---

## Why I Made This

for fun lol

yet I wanted to build something that creative

The Daft Punk helmet design is a perfect platform for this and also cz i like daft punk

This project also pushes me beyond just coding into full product design.

---

## Features

- 📟 Scrolling LED visor (MAX7219 matrices)
- 🌈 WS2812B addressable RGB lighting
- 📱 Bluetooth control from smartphone
- 🔌 Portable USB-powered system
- 🧩 Modular architecture for easier testing and upgrades

---

## How It Works

The system is built around an ESP32 microcontroller.

### Inputs
- Bluetooth commands from a smartphone

### Processing
- ESP32 interprets commands and controls outputs

### Outputs
- LED matrix visor (text display)
- RGB LEDs (lighting effects)

### Example Commands
```
TEXT: HELLO
BRIGHT: 5
MODE: SCROLL
```

---

## Hardware Design

### Microcontroller
- ESP32  
Chosen over Arduino Nano 33 BLE Rev2 due to:
- Higher processing power
- Built-in Bluetooth
- Lower cost

### Components
- MAX7219 LED Matrix Modules (visor display)
- WS2812B LED strips (lighting)
- USB battery pack (power supply)

---

## 3D Model & Structure

The helmet shell is based on an existing open-source model:

https://www.thingiverse.com/thing:5033571

This model includes:
- Full helmet structure
- LED mounting support
- Visor integration

I chose to use this model to focus more on electronics and system design rather than creating a helmet from scratch.

### Modifications (Planned)
- Internal mounting for electronics
- Cable routing paths
- Secure component attachment points

---

## Build Process (Planned)

1. Acquire all components (see BOM)
2. Prototype electronics on breadboard
3. 3D print helmet parts
4. Assemble and mount electronics
5. Install visor and lighting
6. Upload firmware and test system
7. Debug and optimize

---

## Current Status

- ✅ Design phase complete
- ✅ Components selected (BOM included)
- ✅ System architecture defined
- ⏳ Waiting for funding (Hack Club Fallout)
- ⏳ Physical build not started yet

---

## Repository Structure

```
Project-silver-helm/
│
├── README.md
├── bom/
│   └── bom.csv
│
├── hardware/
│   ├── 3d-models/
│   ├── wiring/
│   └── schematics/
│
├── firmware/
│   └── esp32/
│
├── docs/
│   ├── images/
│   └── diagrams/
│
└── resources/
```

---

## Bill of Materials

A full BOM with part links is available here:

```
/bom/bom.csv
```

---

## Future Improvements

- Custom PCB instead of prototyping board
- Improved power distribution
- Advanced lighting animations
- Companion mobile app (instead of raw Bluetooth commands)

---

## Credits

- Helmet 3D model: https://www.thingiverse.com/thing:5033571
- Inspiration: Daft Punk

---

## Notes

This project is currently in the design stage.  
All hardware decisions and architecture have been planned, but physical implementation will begin once funding is approved.

---

## Author

Ali Ezz  
Hack Club Fallout Participant  
Egypt
