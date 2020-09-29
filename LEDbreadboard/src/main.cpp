#include <Arduino.h>

#define DIpin4 4

void setup()
{
  // Initialize PINS
  pinMode(2, OUTPUT);
  pinMode(DIpin4, INPUT);  
}

void loop()
{
  // put your main code here, to run repeatedly:
  digitalWrite(2, DIpin4); 
}