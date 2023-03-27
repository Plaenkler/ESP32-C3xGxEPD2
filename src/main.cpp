#include <Arduino.h>
#include <GxEPD2_BW.h>

#include "800x480.h"

// Display definition for Adafruit QT Py ESP32-C3
GxEPD2_BW<GxEPD2_750_T7, GxEPD2_750_T7::HEIGHT>
    display(GxEPD2_750_T7(/*A0*/ 4, /*A3*/ 0, /*A2*/ 1, /*A1*/ 3));

void setup() {
  Serial.begin(9600);
  unsigned long start = millis();
  // Write image to display and measure time
  display.init();
  display.drawImage(image, 0, 0, 800, 480);
  unsigned long end = millis();
  // Print duration of operation to serial
  Serial.print("Time: ");
  Serial.println(end - start);
  // Flush serial buffer and wait 10 seconds
  Serial.flush();
  delay(10000);
}

void loop() {}