# 🩺 Smart Pill Box – IoT-Based Medication Adherence System (Patented Project)

## Overview
The Smart Pill Box is an IoT-enabled embedded system designed to improve medication adherence through automated reminders and real-time intake tracking. It integrates a microcontroller-based hardware unit with an Android mobile application to ensure users follow prescribed medication schedules accurately.

The system is particularly beneficial for elderly individuals and patients with chronic conditions, reducing missed doses and enabling better health monitoring.

---
<img width="600" height="450" alt="pill boxtop view" src="https://github.com/user-attachments/assets/09925c06-2b9a-4e8a-9526-d3940983905e" />

<img width="300" height="470" alt="app ui main screen" src="https://github.com/user-attachments/assets/e1418992-0fea-49a9-8e2d-a3615d0130a6" />



##  Key Features
- Multi-slot medication scheduling via mobile application  
- LED indication for individual medicine compartments  
- Buzzer alerts for reminder notifications  
- Limit switch-based detection of medicine intake  
- Bluetooth communication between mobile app and hardware  
- Real-time logging of medication events  
- Compact, portable, and battery-powered design  

---

##  System Architecture

### Hardware Components
- **Microcontroller:** ESP32  
- **Communication Module:** Bluetooth (HC-05 or equivalent)  
- **Sensors:** Limit switches (for detecting pill retrieval)  
- **Output Devices:** LEDs and buzzer  
- **Power Supply:** Rechargeable battery  

### Software Components
- **Mobile Application:** Developed using MIT App Inventor  
- **Firmware:** Embedded C using Arduino framework  

---

##  Working Principle
1. The user configures medication schedules via the Android application.  
2. The schedule data is transmitted to the hardware unit using Bluetooth.  
3. At the scheduled time:
   - The buzzer is triggered  
   - The corresponding LED indicates the medicine slot  
4. When the user opens the compartment:
   - The limit switch detects the action  
   - A timestamp is recorded  
5. Medication history is stored and can be reviewed in the mobile application.  

---

##  Repository Structure

```id="3k8d2f"
Smart-Pill-Box-ESP32/
│
├── firmware/         ESP32 source code  
├── hardware/         Schematics and PCB design    
├── images/           Project images  
├── docs/             Supporting documentation  
└── README.md
```

---

##  Setup & Usage

### Hardware Setup
1. Assemble the circuit as per the schematic in `/hardware`  
2. Connect Bluetooth module to Arduino (TX/RX pins)  
3. Interface LEDs, buzzer, and limit switches to GPIO pins  
4. Power the system using a battery module  

### Firmware Upload
1. Open the `.ino` file from `/firmware` in Arduino IDE  
2. Select the correct board and COM port  
3. Upload the firmware to the Arduino  

### Mobile App Setup
1. Open MIT App Inventor  
2. Import the `.aia` file from `/mobile_app`  
3. Build and install the APK on an Android device  

### Operation
1. Pair the mobile app with the Bluetooth module  
2. Configure medicine schedules  
3. Receive alerts and track medication intake  

---

## Future Scope
- Cloud integration for remote monitoring  
- Doctor-facing dashboard  
- Push notifications  
- Data analytics for adherence tracking  

---

## Skills Demonstrated
- Embedded Systems Development  
- Embedded C Programming  
- Bluetooth Communication  
- Mobile App Development  
- Hardware Prototyping and Debugging  

---

## Intellectual Property
This project is part of a patented system. Shared for demonstration purposes only.

---

## Author
Ashwin P
