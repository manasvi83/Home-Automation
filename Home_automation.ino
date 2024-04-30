#include <Arduino.h>

int Data;

void setup() {
  Serial.begin(9600);
  pinMode(5,OUTPUT);
  pinMode(6,OUTPUT);
  pinMode(7,OUTPUT);

 
}

void loop() {
 while(Serial.available() > 0)
  {
    Data = Serial.read();
    Serial.println(Data);
  
   
          if (Data==(49)) {
              digitalWrite(5,1);

          }
          if (Data==(50)) {
              digitalWrite(5,0);

          }
          // LED 2 on
          if (Data==(51)) {
              digitalWrite(6,1);

          }
          if (Data==(52)) {
              digitalWrite(6,0);

          }
          // LED 3 on
          if (Data==(53)) {
              digitalWrite(7,1);

          }
          // LED 3 off
          if (Data==(54)) {
              digitalWrite(7,0);

          }
          // ALL LEDs ON
          if (Data==(55)) {
              digitalWrite(5,1);
              delay(200);
              digitalWrite(6,1);
              delay(300);
              digitalWrite(7,1);

          }
          // ALL LEDs OFF
          if (Data==(56)) {
              digitalWrite(5,0);
              digitalWrite(6,0);
              digitalWrite(7,0);

          }
    
  }
}