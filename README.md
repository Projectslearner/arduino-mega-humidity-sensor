# Humidity Sensor

#### Project Overview

The Humidity Sensor project demonstrates how to use a DHT11 humidity sensor with an Arduino Mega to measure relative humidity in the environment. The DHT11 sensor provides accurate humidity readings and communicates with the Arduino via a digital signal. This project reads the humidity data from the sensor and prints it to the Serial Monitor.

#### Components Needed

1. **Arduino Mega**
2. **DHT11 Humidity and Temperature Sensor**
3. **Jumper Wires**

#### Block Diagram


#### Circuit Setup

1. **Connect the DHT11 to Arduino Mega:**
   - **Signal Pin (OUT)** of the DHT11 to digital pin 2 (DHTPIN) on Arduino Mega
   - **VCC** of the DHT11 to **5V** on Arduino Mega
   - **GND** of the DHT11 to **GND** on Arduino Mega

#### Instructions

1. **Install Required Libraries:**
   - Download and install the **DHT sensor library** by Adafruit from the Arduino Library Manager. Search for "DHT sensor library" and install it.

2. **Circuit Setup:**
   - Connect the DHT11 sensor module to the Arduino Mega as described in the circuit setup section.

3. **Code Upload:**
   - Open the Arduino IDE and create a new sketch.
   - Copy and paste the provided Arduino code into the sketch.

4. **Testing:**
   - Upload the code to the Arduino Mega.
   - Open the serial monitor in Arduino IDE (set to 9600 baud).
   - Observe the Serial Monitor for humidity readings printed every few seconds.

#### Applications

- **Environmental Monitoring:** Monitor and log humidity levels in indoor environments.
- **Automation Systems:** Integrate humidity sensing into automated systems for climate control.
- **Plant Health Monitoring:** Use in projects involving plant care to ensure optimal humidity levels.

#### Notes

- Ensure the DHT11 sensor is placed in an environment representative of where you want to measure humidity.
- The DHT11 sensor provides relative humidity readings. For more precise applications, consider using the DHT22 sensor or other higher precision sensors.
- Adjust the delay time in the `loop()` function to control the frequency of humidity measurements based on your project requirements.

---

🌐 [ProjectsLearner](https://projectslearner.com/learn/arduino-mega-humidity-sensor)  
📧 [projectslearner@gmail.com](mailto:projectslearner@gmail.com)  
📸 [Instagram](https://www.instagram.com/projectslearner/)  
📘 [Facebook](https://www.facebook.com/projectslearner)  
▶️ [YouTube](https://www.youtube.com/@ProjectsLearner)  
📘 [LinkedIn](https://www.linkedin.com/in/projectslearner)  

Crafted for you with ❤️ from ProjectsLearner