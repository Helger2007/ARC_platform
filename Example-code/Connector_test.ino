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
// Define the pinMode for every pin that needs to be tested.
void setup() 
{
  pinMode(2,INPUT);
  pinMode(3,INPUT);
  pinMode(4,INPUT);
  pinMode(5,INPUT);
  pinMode(6,INPUT);
  pinMode(7,INPUT);
  pinMode(8,INPUT);
  pinMode(9,INPUT);
  pinMode(10,INPUT);
  pinMode(11,INPUT);
  pixels.begin();
}


//***LOOP 
void loop() 
{
  int buttonState2 = digitalRead(2);
  int buttonState3 = digitalRead(3);
  int buttonState4 = digitalRead(4);
  int buttonState5 = digitalRead(5);
  int buttonState6 = digitalRead(6);
  int buttonState7 = digitalRead(7);
  int buttonState8 = digitalRead(8);
  int buttonState9 = digitalRead(9);
  int buttonState10 = digitalRead(10);
  int buttonState11 = digitalRead(11);

  if (buttonState2 == LOW) {
    pixels.setPixelColor(1,pixels.Color(255, 0, 0));
  }
  else {
    pixels.setPixelColor(1,pixels.Color(0, 0, 0));
  }

  if (buttonState3 == LOW) {
    pixels.setPixelColor(2,pixels.Color(255, 0, 0));
  }
  else {
    pixels.setPixelColor(2,pixels.Color(0, 0, 0));
  }

  if (buttonState4 == LOW) {
    pixels.setPixelColor(3,pixels.Color(255, 0, 0));
  }
  else {
    pixels.setPixelColor(3,pixels.Color(0, 0, 0));
  }

  if (buttonState5 == LOW) {
    pixels.setPixelColor(4,pixels.Color(255, 0, 0));
  }
  else {
    pixels.setPixelColor(4,pixels.Color(0, 0, 0));
  }

  if (buttonState6 == LOW) {
    pixels.setPixelColor(5,pixels.Color(255, 0, 0));
  }
  else {
    pixels.setPixelColor(5,pixels.Color(0, 0, 0));
  }

  if (buttonState7 == LOW) {
    pixels.setPixelColor(6,pixels.Color(255, 0, 0));
  }
  else {
    pixels.setPixelColor(6,pixels.Color(0, 0, 0));
  }

  if (buttonState8 == LOW) {
    pixels.setPixelColor(7,pixels.Color(255, 0, 0));
  }
  else {
    pixels.setPixelColor(7,pixels.Color(0, 0, 0));
  }

  if (buttonState9 == LOW) {
    pixels.setPixelColor(8,pixels.Color(255, 0, 0));
  }
  else {
    pixels.setPixelColor(8,pixels.Color(0, 0, 0));
  }

  if (buttonState10 == LOW) {
    pixels.setPixelColor(9,pixels.Color(255, 0, 0));
  }
  else {
    pixels.setPixelColor(9,pixels.Color(0, 0, 0));
  }

  if (buttonState11 == LOW) {
    pixels.setPixelColor(10,pixels.Color(255, 0, 0));
  }
  else {
    pixels.setPixelColor(10,pixels.Color(0, 0, 0));
  }
  pixels.show()
}
