#include <Arduino.h>

/*
  Program that controls a traffic light. The program can control the brightness and durationspeed of the lights. 
*/

float red_delay = 3000;
float green_delay = 3000;
float hastighed = 1;
int brightness = 255; //0 og 255

void setup() {
  // put your setup code here, to run once:
  pinMode(3, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  analogWrite(3, brightness); 
  delay(red_delay*hastighed);
  analogWrite(5, brightness);
  delay(1200*hastighed); 
  analogWrite(3, LOW);
  analogWrite(5, LOW);
  analogWrite(6, brightness);
  delay(green_delay*hastighed);
  analogWrite(6, LOW);
  analogWrite(5, brightness);
  delay(500*hastighed);
  analogWrite(5, LOW);
}
