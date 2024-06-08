// Wifi utilities for setup
#include "wifi_utils.hpp"
#include <WiFi.h>

const char* ssid = "Wokwi-GUEST";
const char* password = "";

void setupWiFi() {
  // Connect to WiFi network
  Serial.print("Connecting to WiFi");
  WiFi.begin(ssid, password);
  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print(".");
  }
  Serial.println("Connected!");
}
