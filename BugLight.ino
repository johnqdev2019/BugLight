#include "src/BugLight.h"
// the setup routine runs once when you press reset:

const int ledPin = 1;

void setup() {
  // initialize the digital pin as an output.
  pinMode(ledPin, OUTPUT); //LED on Model B
}

// the loop routine runs over and over again forever:
void loop() {
  blink(ledPin);
}
