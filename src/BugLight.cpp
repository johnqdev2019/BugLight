#include "BugLight.h" //this is a header file

void blink(int pin){
  digitalWrite(pin, HIGH);
  delay(50);
  digitalWrite(pin, LOW);
  delay(4500);
 }
