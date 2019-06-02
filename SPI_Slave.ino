
#include <SPI.h>
byte receivedData;


void setup() 
 {
  pinMode(MISO, OUTPUT);
  Serial.begin(115200);
  SPCR |= _BV(SPE);
 
 }


void loop() 
 {

  receivedData = SPDR;
  Serial.print(receivedData);

 }
