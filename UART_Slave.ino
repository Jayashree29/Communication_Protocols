
char receivedData;
void setup() 
 {
  Serial.begin(9600);

 }

void loop() 
 {
   while(Serial.available() > 0)
   {
     receivedData = Serial.read();
     Serial.print(receivedData);
   }

 }
