#include <SoftwareSerial.h>
int rxPin = 8;
int txPin = 7;

SoftwareSerial mySerial(rxPin, txPin);


void setup() 
 {
   Serial.begin(9600);
   mySerial.begin(9600);
   
   
 }

void loop() 
 {
  
    
    mySerial.write("HEY");
    delay(1000);
    
   
 }
