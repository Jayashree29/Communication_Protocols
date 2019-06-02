
#include <Wire.h>

void setup() 
  {

    Wire.begin(8);
    Wire.onReceive(receivingData);
    Serial.begin(9600);

  }

void loop() 
  {

      

  }

void receivingData()
  {
     
    while(Wire.available() > 0)
    {
      
      char receivedData = Wire.read();
      
      Serial.print(receivedData);
    }
  }

