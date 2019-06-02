#include <SPI.h>
int data = 1;

void setup() 
  {
   
   digitalWrite(SS, HIGH);
   SPI.begin();
   SPI.setClockDivider(SPI_CLOCK_DIV4);
   
  }

void loop() 
  {
    
    digitalWrite(SS, LOW);
    SPI.transfer(data);
    digitalWrite(SS, HIGH);
    delay(1000);
  
  }
