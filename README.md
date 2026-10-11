# Xo-DevBoard

<img width="845" height="574" alt="image" src="https://github.com/user-attachments/assets/1b919f1b-1715-4a71-af3b-f2caea205ec8" />

**Xo-DevBoard** is a compact, custom ESP32-WROOM-32 development board featuring an integrated display header designed specifically for real-time sensor debugging without relying on a tethered PC monitor.

---

## The Problem & The Solution

**Tired of constantly alt-tabbing to your Serial Monitor just to check if a sensor value is updating?**  
Traditional devboards force you to keep your laptop plugged in during basic hardware debugging. The **Xo-DevBoard** solves this by providing a dedicated display interface directly on the board. Plug in a mini OLED or TFT screen, flash your code, and read live telemetry anywhere—completely standalone.

---

## Features & Hardware Highlights

* **Brain:** ESP32-WROOM-32 module (Wi-Fi + Bluetooth BLE).
* **Integrated Display Interface:** Dedicated 8-pin connector supporting I2C/SPI display modules.
* **On-board USB-to-UART Converter:** CH340C chip with an automated DTR/RTS auto-reset circuit
* **Power Management:** Modern USB-C connector with ESD/overcurrent protection.
* **User Controls:** Tactile Reset (EN) and Boot (GPIO0) buttons.
* **Full Breakout:** One 1x15 pin header and one 1x10 pin header breaking out all usable ESP32 GPIOs for breadboard prototyping.

---

Display Header Pinout

The built-in display connector is routed to the following ESP32 pins:

| Pin # | Header Label | ESP32 GPIO | Typical Usage (I2C / SPI) |
| :---: | :----------: | :--------: | :-----------------------: |
| 1     | GND          | GND        | Ground               |
| 2     | 3.3V         | +3.3VA     | Power Supply (3.3V)    |
| 3     | D18          | GPIO18     | SDA (I2C) / MOSI (SPI)   |
| 4     | D23          | GPIO23     | SCL (I2C) / SCK (SPI)    |
| 5     | D2           | GPIO02     | Reset / General IO      |
| 6     | D4           | GPIO04     | Data / Command (DC)    |
| 7     | D5           | GPIO05     | Chip Select (CS)        |
| 8     | 3.3V         | +3.3VA     | Auxiliary Power         |


## Project Status & Firmware

This repository contains:
1. **KiCad Production Files:** Schematic (`.kicad_sch`), PCB layout (`.kicad_pcb`), and Gerber files for manufacturing.
2. **Starter Firmware:** A C++/PlatformIO demo program that initializes the display, tests onboard peripherals, and renders a `"Hello World!"` on the screen.
