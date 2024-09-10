#include <Adafruit_NeoPixel.h>

#define LED_PIN    4    // Pin connected to the data pin of the WS2812
#define NUM_LEDS   7    // Only 1 NeoPixel

Adafruit_NeoPixel strip = Adafruit_NeoPixel(NUM_LEDS, LED_PIN, NEO_GRB + NEO_KHZ800);

void setup() {
  strip.begin();     // Initialize the NeoPixel
  strip.setPixelColor(0, strip.Color(0, 255, 200));  // Set the color once (cyan-blue)
  strip.show();      // Show the color on the NeoPixel
}

void loop() {
  // Empty loop since the LED is set only once
}