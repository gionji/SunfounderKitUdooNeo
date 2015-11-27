int sensorPin = A0;
int ledPin = 13;
int sensorValue = 0;

void setup() {
  pinMode(ledPin, OUTPUT); 
  Serial.begin(115200);
}

void loop() {
  sensorValue = analogRead(sensorPin);
  Serial.println(1024 - sensorValue); 
  //Serial.write(sensorValue);
  digitalWrite(ledPin, HIGH); 
  delay(100);         
  digitalWrite(ledPin, LOW);  
  delay(100);                 
}
