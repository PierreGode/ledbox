// Written by Pierre Goude
#include <Adafruit_NeoPixel.h>
#define BUTTON_PIN4   4    // Digital IO pin connected to the button.  This will be
#define BUTTON_PIN5   5 
#define BUTTON_PIN6   6 
#define BUTTON_PIN7   7
#define PIN    10
#define NUMPIXELS   40    // Change depending of number of leds

Adafruit_NeoPixel pixels = Adafruit_NeoPixel(NUMPIXELS, PIN, NEO_GRB + NEO_KHZ800);

bool oldState = HIGH;
int showType = 0;

void setup() {
  pinMode(BUTTON_PIN4, INPUT_PULLUP);
  pixels.begin();
  pixels.show(); // Initialize all pixels to 'off'
    pinMode(BUTTON_PIN5, INPUT_PULLUP);
  pixels.begin();
  pixels.show(); // Initialize all pixels to 'off'
    pinMode(BUTTON_PIN6, INPUT_PULLUP);
  pixels.begin();
  pixels.show(); // Initialize all pixels to 'off'
    pinMode(BUTTON_PIN7, INPUT_PULLUP);
  pixels.begin();
  pixels.show(); // Initialize all pixels to 'off'
}

void loop() {

 if (digitalRead(BUTTON_PIN4) == HIGH) {
start4();

  }
 if (digitalRead(BUTTON_PIN5) == HIGH) {
start5();

  }
 if (digitalRead(BUTTON_PIN6) == HIGH) {
start6();

  }
 if (digitalRead(BUTTON_PIN7) == HIGH) {
start7();

  }
}

void start4() {
    // Get current button state.
  bool newState = digitalRead(BUTTON_PIN4);
  
  // Check if state changed from high to low (button press).
  if (newState == LOW && oldState == HIGH) {
    // Short delay to debounce button.
    delay(20);
    // Check if button is still low after debounce.
    newState = digitalRead(BUTTON_PIN4);
    if (newState == LOW) {
      showType++;
      if (showType > 9)
        showType=0;
  for(int i=0;i<NUMPIXELS;i++){
    // pixels.Color takes RGB values, from 0,0,0 up to 255,255,255
    pixels.setPixelColor(i, pixels.Color(0,0,255)); // Moderately blue color.
    pixels.show(); // This sends the updated pixel color to the hardware.

 }
    }
  }
    // Set the last button state to the old state.
  oldState = newState;
}

void start5() {
    // Get current button state.
  bool newState = digitalRead(BUTTON_PIN5);
  
  // Check if state changed from high to low (button press).
  if (newState == LOW && oldState == HIGH) {
    // Short delay to debounce button.
    delay(20);
    // Check if button is still low after debounce.
    newState = digitalRead(BUTTON_PIN5);
    if (newState == LOW) {
      showType++;
      if (showType > 9)
        showType=0;
  for(int i=0;i<NUMPIXELS;i++){
    // pixels.Color takes RGB values, from 0,0,0 up to 255,255,255
    pixels.setPixelColor(i, pixels.Color(250,250,210)); // Moderately bright yellow color.
    pixels.show(); // This sends the updated pixel color to the hardware.

 }
    }
  }
    // Set the last button state to the old state.
  oldState = newState;
}




void start6() {
    // Get current button state.
  bool newState = digitalRead(BUTTON_PIN6);
  
  // Check if state changed from high to low (button press).
  if (newState == LOW && oldState == HIGH) {
    // Short delay to debounce button.
    delay(20);
    // Check if button is still low after debounce.
    newState = digitalRead(BUTTON_PIN6);
    if (newState == LOW) {
      showType++;
      if (showType > 9)
        showType=0;
  for(int i=0;i<NUMPIXELS;i++){
    // pixels.Color takes RGB values, from 0,0,0 up to 255,255,255
    pixels.setPixelColor(i, pixels.Color(255,0,0)); // Moderately red color.
    pixels.show(); // This sends the updated pixel color to the hardware.
  }
    }
  }
    // Set the last button state to the old state.
  oldState = newState;
}



void start7() {
    // Get current button state.
  bool newState = digitalRead(BUTTON_PIN7);
  
  // Check if state changed from high to low (button press).
  if (newState == LOW && oldState == HIGH) {

    delay(20);
    newState = digitalRead(BUTTON_PIN7);
    if (newState == LOW) {
      showType++;
      if (showType > 9)
        showType=0;
  for(int i=0;i<NUMPIXELS;i++){
    // pixels.Color takes RGB values, from 0,0,0 up to 255,255,255
    pixels.setPixelColor(i, pixels.Color(0,255,0)); // Moderately bright green color.
    //pixels.setBrightness(255);
    pixels.show(); // This sends the updated pixel color to the hardware.

  }
    }
  }
    // Set the last button state to the old state.
  oldState = newState;
}

  void setgreen() {
  for(int i=0;i<NUMPIXELS;i++){
    // pixels.Color takes RGB values, from 0,0,0 up to 255,255,255
    pixels.setPixelColor(i, pixels.Color(0,255,0)); // Moderately bright green color.
    //pixels.setBrightness(255);
    pixels.show(); // This sends the updated pixel color to the hardware.

 }
}
void setred() {
  for(int i=0;i<NUMPIXELS;i++){
    // pixels.Color takes RGB values, from 0,0,0 up to 255,255,255
    pixels.setPixelColor(i, pixels.Color(255,0,0)); // Moderately bright red color.
    pixels.show(); // This sends the updated pixel color to the hardware.

 }
}
void setblue() {
  for(int i=0;i<NUMPIXELS;i++){
    // pixels.Color takes RGB values, from 0,0,0 up to 255,255,255
    pixels.setPixelColor(i, pixels.Color(0,0,255)); // Moderately bright blue color.
    pixels.show(); // This sends the updated pixel color to the hardware.

 }
}
void setyellow() {
  for(int i=0;i<NUMPIXELS;i++){
    // pixels.Color takes RGB values, from 0,0,0 up to 255,255,255
    pixels.setPixelColor(i, pixels.Color(250,250,210)); // Moderately bright yellow color.
    pixels.show(); // This sends the updated pixel color to the hardware.

 }
}

