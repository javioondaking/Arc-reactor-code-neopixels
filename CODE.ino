#include <Adafruit_NeoPixel.h>

#define LED_PIN    7    // Pin connected to the data pin of the WS2812
#define NUM_LEDS   8    // Number of LEDs in the WS2812 strip

Adafruit_NeoPixel strip = Adafruit_NeoPixel(NUM_LEDS, LED_PIN, NEO_GRB + NEO_KHZ800);

// Color variables for Tony Stark's arc reactor (cyan-blue glow)
uint8_t arcReactorRed = 0;
uint8_t arcReactorGreen = 255;
uint8_t arcReactorBlue = 200;

void setup() {
  strip.begin();
  strip.show();  // Initialize all pixels to 'off'
}

void loop() {
  // Set all LEDs to the arc reactor color
  for(int i=0; i<NUM_LEDS; i++) {
    strip.setPixelColor(i, strip.Color(arcReactorRed, arcReactorGreen, arcReactorBlue));
  }
  strip.show();  // Update the strip with the new color

  delay(50);  // Small delay to avoid flickering
}