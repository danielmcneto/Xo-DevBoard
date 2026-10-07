# Xo-DevBoard

![Xo-DevBoard Rendering](https://github.com/user-attachments/assets/21655db8-6b7c-4788-93f6-2afbbd3f28c6)

**Xo-DevBoard** is a compact, custom ESP32-WROOM-32 development board featuring an integrated display header designed specifically for real-time sensor debugging without relying on a tethered PC monitor.

---

## The Problem & The Solution

**Tired of constantly alt-tabbing to your Serial Monitor just to check if a sensor value is updating?**  
Traditional devboards force you to keep your laptop plugged in during basic hardware debugging. The **Xo-DevBoard** solves this by providing a dedicated display interface (J4) directly on the board. Plug in a mini OLED or TFT screen, flash your code, and read live telemetry anywhere—completely standalone.

---

## Features & Hardware Highlights

* **Brain:** ESP32-WROOM-32 module (Wi-Fi + Bluetooth BLE).
* **Integrated Display Interface (J4 Header):** Dedicated 8-pin connector supporting I2C/SPI display modules.
* **On-board USB-to-UART Converter:** CH340C chip with an automated DTR/RTS auto-reset circuit
* **Power Management:** Modern USB-C connector with ESD/overcurrent protection.
* **User Controls:** Tactile Reset (EN) and Boot (GPIO0) buttons.
* **Full Breakout:** Dual 1x15 pin headers breaking out all usable ESP32 GPIOs for breadboard prototyping.

---

<!--## Display Header Pinout (J4)

The built-in display connector (**J4**) is routed to the following ESP32 pins[cite: 2]:

| Pin # | Header Label | ESP32 GPIO | Typical Usage (I2C / SPI) |
| :---: | :----------: | :--------: | :-----------------------: |
| 1     | GND          | GND        | Ground[cite: 2]                   |
| 2     | 3.3V         | +3.3VA     | Power Supply (3.3V)[cite: 2]      |
| 3     | D18          | GPIO18     | SDA (I2C) / MOSI (SPI)[cite: 2]   |
| 4     | D23          | GPIO23     | SCL (I2C) / SCK (SPI)[cite: 2]    |
| 5     | D2           | GPIO02     | Reset / General IO[cite: 2]       |
| 6     | D4           | GPIO04     | Data / Command (DC)[cite: 2]      |
| 7     | D5           | GPIO05     | Chip Select (CS)[cite: 2]         |
| 8     | 3.3V         | +3.3VA     | Auxiliary Power[cite: 2]          |

--->

## Project Status & Firmware

This repository contains:
1. **KiCad Production Files:** Schematic (`.kicad_sch`), PCB layout (`.kicad_pcb`), and Gerber files for manufacturing[cite: 2].
2. **Starter Firmware:** A C++/PlatformIO demo program that initializes the display, tests onboard peripherals, and renders a `"Hello World!"` telemetry screen.
