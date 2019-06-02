
#include <Wire.h> //adding Wire library for I2C communication

//String data = "HELLO"; //initialising a variable "data" to be sent 

void setup() 
 {
  
  Wire.begin(); //setting the I2C bus
  Serial.begin(9600);
 }

void loop() 
 {
  
  Wire.beginTransmission(8); //starting the transmission with device of address 8
  Wire.write("Hello"); //sending the data
  //Serial.print(data);
  delay(2000);
  Wire.endTransmission(); //ending the transmission
 
 }
