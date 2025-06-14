# Gas Sensor Project - Raspberry Pi Pico W & MQ-5

This project is a basic Internet of Things (IoT) application using an MQ-5 Gas Sensor and Raspberry Pi Pico W. The purpose of the application is to detect the presence of alcohol vapors in the environment and respond by triggering an LED alert system.

## Application Purpose

- **Safety Enhancement**: Early warning for alcohol vapor presence
- **Prevention of Alcohol-related Accidents**: Useful in industrial or sensitive environments
- **Compliance Monitoring**: Detects unauthorized alcohol presence in workplaces or public systems
- **Health Protection**: Prevents prolonged exposure to toxic vapor
- **Real-time Monitoring**: Live data detection
- **User Education**: Awareness of alcohol vapor hazards

## Project Details

- **Board**: Raspberry Pi Pico W
- **Sensor**: MQ-5 Gas Sensor
- **IDE**: Arduino IDE
- **Programming Language**: Arduino (C/C++)

## Included Files

| File | Description |
|------|-------------|
| `Homework-1.ino` | Arduino source code for gas detection logic |
| `Gas sensor app.fzz` | Circuit design created in Fritzing |
| `Application Homework-1_Sensor 1.docx` | Project report and explanation |
| `links.txt` | Includes video and simulation links |

## Project Links

- **Video (in English)**: [YouTube Video](https://youtu.be/wXe36bMi4EU?feature=shared)
- **Simulation**: [Wokwi Simulation](https://wokwi.com/projects/396325415308715009)

## How it Works

1. MQ-5 sensor detects the alcohol vapor concentration.
2. If the concentration exceeds a certain threshold, LEDs light up as a warning signal.
3. The system provides real-time feedback and can be extended with data logging features.

## Setup

- Open `Homework-1.ino` with Arduino IDE
- Select **Raspberry Pi Pico W** as the board
- Connect the MQ-5 sensor to appropriate GPIO pins
- Upload the code and observe LED behavior based on gas levels

## 📷 Visuals

- Circuit photo and screenshots are included in the `docx` file.

---

Wokwi Simulation: https://wokwi.com/projects/396325415308715009
YouTube Video: https://youtu.be/wXe36bMi4EU?feature=shared

