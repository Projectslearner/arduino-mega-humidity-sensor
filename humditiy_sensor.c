/*
    Project name : Humidity Sensor
    Modified Date: 13-06-2024
    Code by : Projectslearner
    Website : https://projectslearner.com/learn/arduino-mega-humidity-sensor
*/

#include <DHT.h>

#define DHTPIN 2     // Digital pin connected to the DHT sensor
#define DHTTYPE DHT11   // DHT 11

DHT dht(DHTPIN, DHTTYPE);

void setup() {
  Serial.begin(9600); // Initialize serial communication
  dht.begin(); // Initialize DHT sensor
}

void loop() {
  // Wait a few seconds between measurements.
  delay(2000);

  // Reading humidity takes about 250 milliseconds!
  float humidity = dht.readHumidity(); // Read humidity value

  // Check if read failed and exit early (to try again).
  if (isnan(humidity)) {
    Serial.println("Failed to read from DHT sensor!");
    return;
  }

  // Print humidity value to Serial Monitor
  Serial.print("Humidity: ");
  Serial.print(humidity);
  Serial.println(" %");
}
