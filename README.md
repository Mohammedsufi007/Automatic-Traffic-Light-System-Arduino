Automatic-Traffic-Light-System-Arduino
An Arduino-based automatic traffic light control system using sensor-based vehicle detection to optimize traffic flow.

🚦 Automatic Traffic Light System using Arduino

An Arduino-based automatic traffic light control system designed to improve traffic flow by reducing manual intervention.  
The system uses sensor-based vehicle detection to dynamically control traffic signals, making it suitable for smart city and IoT-based traffic management applications.

📌 Project Overview

Traditional traffic light systems operate on fixed timers, which can cause unnecessary delays.  
This project implements an automated traffic light system that adapts signal timing based on vehicle presence using sensors.

🎯 Objectives

- Automate traffic signal operations
- Reduce traffic congestion and waiting time
- Optimize vehicle flow using sensor-based detection
- Demonstrate real-world IoT and smart city applications

⚙️ Technologies & Components Used

-> Hardware
- Arduino UNO
- IR Sensors (Vehicle Detection)
- LEDs (Red, Yellow, Green)
- Resistors
- Breadboard & Jumper Wires
- Power Supply

-> Software
- Arduino IDE
- Embedded C / Arduino Programming

✨ Features

- Automated traffic signal switching
- Real-time vehicle detection using sensors
- Adaptive signal timing based on traffic flow
- Low-cost and energy-efficient design
- Scalable for multi-lane intersections

🔌 Circuit Diagram

![Circuit diagram arduino](https://github.com/user-attachments/assets/7f9d0ee0-b994-413a-987a-f72aaab25e81)

🧠 Working Principle

1. IR sensors detect the presence of vehicles on each lane.
2. Arduino reads sensor inputs in real time.
3. Traffic lights are switched dynamically based on vehicle flow.
4. Red, Yellow, and Green LEDs represent traffic signals.

▶️ How to Run the Project

1. Install *Arduino IDE*
2. Connect components as per the circuit diagram
3. Open traffic_light.ino from the code folder
4. Select the correct *board* and *COM port*
5. Upload the code to Arduino
6. Power the circuit and observe signal behavior

📚 What I Learned

- Arduino programming and pin configuration
- Sensor integration and real-time data handling
- Traffic control logic implementation
- Basics of smart city and IoT systems

🚀 Future Enhancements

- Integrate cloud monitoring using IoT platforms
- Add GSM/Wi-Fi module for remote control
- Implement AI-based traffic prediction
- Extend system for four-way intersections
- Emergency vehicle priority handling

👤 Author

Mohammed Sufiyan
Vikas
