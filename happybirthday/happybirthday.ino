#include <Adafruit_GFX.h>
#include <Adafruit_ST7789.h>
#include <SPI.h>

#include "qr.h"
#include "happybirthday.h"

// The CS pin on the TFT needs to be plugged in to the pin labeled 'D9'.
const int TFT_CS = D9;

// The DC pin on the TFT needs to be plugged in to the pin labeled 'D7'.
const int TFT_DC = D7;

// In C++, we can instantiate an object and call it's constructor using the `Class variableName{constructorParam, constructorParam2}` syntax
// The brace syntax is favoured over parentheses because it's clear it's an instantiation and not a function call.
Adafruit_ST7789 tft{TFT_CS, TFT_DC, -1};

void setup(void) {
  // Not necessary, but when you're debugging, you can do Serial.println("HIT!")
  Serial.begin(9600);
 
  // Initialise the TFT screen library (this does a bunch of communication on the SPI pins)
  tft.init(240, 240, SPI_MODE0);   

  // Draw the heartfelt message
  tft.drawRGBBitmap(0, 0, (uint16_t*)happy_birthday.pixel_data, 240, 240);

  delay(10000);

  // Draw the QR code
  tft.drawRGBBitmap(0, 0, (uint16_t*)qr_code.pixel_data, 240, 240);
}
 
void loop() {
}