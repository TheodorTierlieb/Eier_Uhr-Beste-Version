#include "neopixel_controller.h"

Adafruit_NeoPixel strip = Adafruit_NeoPixel(NUMPIXELS, PIN, NEO_GRB + NEO_KHZ800);

void initializeNeoPixel() {
  strip.begin();
  strip.setBrightness(30);  // Helligkeit auf 50% setzen
  strip.show();  // Alle Pixel ausschalten zu Beginn
}

void turnOnLED(int index, uint32_t color) {
  strip.setPixelColor(index, color);
  strip.show();
  delay(1000);
}

void blinkColor(uint32_t color, int blinkCount) {
  for (int i = 0; i < blinkCount; ++i) {
    strip.fill(color, 0, NUMPIXELS);
    strip.show();
    delay(500);
    strip.fill(0, 0, NUMPIXELS);
    strip.show();
    delay(500);
  }
}