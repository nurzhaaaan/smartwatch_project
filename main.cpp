#include <Arduino.h>

void setup() {
  Serial.begin(115200);
  delay(1000);
  Serial.println("ESP32 STARTED");
}

void loop() {
  Serial.println("ESP32 OK");
  delay(1000);
}
