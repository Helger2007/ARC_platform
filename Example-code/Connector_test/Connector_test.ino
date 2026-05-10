/* Example sketch to test connectors by Helger2007 as examplecode for the ARC_platform project */

//***DECLARATIONS
//NEOPIXEL library
#include <Adafruit_NeoPixel.h>
#ifdef __AVR__
  #include <avr/power.h>
#endif

// Which pin on the Arduino is connected to the BrightDots?
// On a VMW100 it's 12
#define PIN            12

// How many BrihgtDots are attached to the Arduino?
// 24 on a VMW100
#define NUMPIXELS      24

// Setting up the Neopixel library using the previously defined number of LED's and pin.
// The last parameter might need to be changed according to hardware.
Adafruit_NeoPixel pixels = Adafruit_NeoPixel(NUMPIXELS, PIN, NEO_GRB + NEO_KHZ800);

//***SETUP (runs once)
// Define the pin that needs to be tested in the variable below.
#define TEST 10

void setup() 
{
  pinMode(TEST,INPUT);
  pixels.begin();
}


//***LOOP 
void loop() 
{
  if (digitalRead(TEST) == HIGH) {
    pixels.setPixelColor(0,pixels.Color(255, 0, 255));
  }
  else {
    pixels.setPixelColor(0,pixels.Color(0, 0, 0));
  }
  pixels.show();
}
