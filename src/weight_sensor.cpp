// Weight sensor utilities for setup and weight sensing
#include "weight_sensor.hpp"
#include <HX711.h>

HX711 scale;

// Function to set up the weight sensor
void setupWeightSensor() {
  Serial.println("Initializing the scale");
  scale.begin(18, 4);
  scale.set_scale(420.0983);
}

// Function to sense weight using the sensor
float sense() {
    float weight = scale.get_units();
    if (isnan(weight)) {
      Serial.println("Failed to read from HX711 sensor!");
    }
    return weight;
}
