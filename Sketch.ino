#include "DHT.h"
DHT dht(15, DHT22);

void setup() {
  Serial.begin(115200);
  dht.begin();
}

void loop() {
  float t = dht.readTemperature();
  float h = dht.readHumidity();
  int soil = map(analogRead(34), 0, 4095, 0, 100);
  Serial.printf("Temp %.1fC | Humidity %.1f%% | Soil %d%%\n", t, h, soil);
  if (soil < 30) Serial.println("Water now!");
  else if (soil > 70) Serial.println("Too wet, wait.");
  else Serial.println("Plant is happy.");
  delay(2000);
}
