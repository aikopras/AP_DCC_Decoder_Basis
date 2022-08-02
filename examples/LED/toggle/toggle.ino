//******************************************************************************************************
//
// Test sketch for the AP_DCC_LED library
// The onboard LED should toggle every second
// 22022/07/20 AP
//
//******************************************************************************************************
#include <Arduino.h>
#include <AP_DCC_LED.h>

Basic_Led myLed;                         // Instantiate the LED object

const uint8_t ledPin = LED_BUILTIN;      // Can be used for most boards (13)


void setup() {
  myLed.attach(ledPin);
}


void loop() {
  myLed.toggle();
  delay(1000);
}
