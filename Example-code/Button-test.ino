/* BrightDot example program by PSI @ Velleman NV */
/* Based on the NeoPixel Ring simple sketch by Shae Erisson */

//***DECLARATIONS
//NEOPIXEL library
#include <Adafruit_NeoPixel.h>
#ifdef __AVR__
  #include <avr/power.h>
#endif

// Which pin on the Arduino is connected to the BrightDots?
// On a VMW100 this is 12, on VMW101 this is 19
#define PIN            12

// How many BrihgtDots are attached to the Arduino?
// On a VMW100 this is 24
#define NUMPIXELS      24

// When we setup the NeoPixel library, we tell it how many pixels, and which pin to use to send signals.
// Note that for older NeoPixel strips you might need to change the third parameter--see the strandtest
// example for more information on possible values.
Adafruit_NeoPixel pixels = Adafruit_NeoPixel(NUMPIXELS, PIN, NEO_GRB + NEO_KHZ800);
int delayval = 500; // delay for half a second

//***SETUP (run once) 
void setup() 
{
  pinMode(2,INPUT);
  pixels.begin();
}


//***LOOP 
void loop() 
{
  int buttonState = digitalRead(2);
  
  if (buttonState == LOW) {
    pixels.setPixelColor(0,pixels.Color(255, 0, 0));
    pixels.show();
  }
  else {
    pixels.setPixelColor(0,pixels.Color(0, 0, 0));
    pixels.show();
  }
}
