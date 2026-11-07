🌱 Smart Plant Monitor (ESP32 Simulation)

A virtual plant-care monitor built simply with ESP32, a DHT22 temperature/humidity sensor, and a potentiometer that simulates soil moisture. It runs fully online in the Wokwi simulator, so no hardware is needed.



What it does ? 

- Reads temperature and humidity from the DHT22
- Reads "soil moisture" (0-100%) from the potentiometer
- Prints advice to the Serial Monitor every 2 seconds:
  - Below 30%: Water now!
  - Above 70%: Too wet, wait.
  - Otherwise: Plant is happy.

 Parts : 
| Part | Pin |
|------|-----|
| ESP32 DevKit | n/a |
| DHT22 sensor | GPIO 15 |
| Potentiometer (soil simulator) | GPIO 34 (ADC1, safe with Wi-Fi) |

 Files :
- sketch.ino: the C++ code
- diagram.json: the Wokwi circuit

How to run it ?

1. Open the Wokwi website.
2. Press the green ▶ button.
3. Drag the potentiometer knob and watch the advice change.

Built with :
C++ (Arduino framework), ESP32, Wokwi, DHT sensor library

Ideas for next steps for future improvement: 

- Add Wi-Fi and send readings to a web dashboard
- Use an AI API to generate personalized watering tips
- Add an LED or buzzer alert

 Author
Salem Ben Salah - TechGeek
