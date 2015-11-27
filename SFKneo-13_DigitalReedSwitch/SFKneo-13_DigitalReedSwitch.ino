const int switchPin = 2;  
   
void setup() {
  pinMode(switchPin, INPUT);        
  digitalWrite(switchPin, HIGH);    
  Serial.begin(115200);
}

void loop() {  
  Serial.println(digitalRead(switchPin));  
  delay(200);
}
