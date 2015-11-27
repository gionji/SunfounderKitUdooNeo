const int gasPin = A0; 

void setup(){
  Serial.begin(115200); 
}

void loop(){
  Serial.println(analogRead(gasPin)); 
  delay(1000); 
}
