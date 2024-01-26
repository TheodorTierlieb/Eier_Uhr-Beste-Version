#ifndef NEOPIXEL_CONTROLLER_H

#define NEOPIXEL_CONTROLLER_H

#include <Adafruit_NeoPixel.h>

#define PIN            18  // Anschlusspin für die NeoPixel-LEDs
#define NUMPIXELS      8  // Anzahl der LEDs in der Leiste

extern Adafruit_NeoPixel strip;

void initializeNeoPixel();
void turnOnLED(int index, uint32_t color);
void blinkColor(uint32_t color, int blinkCount);

#endif