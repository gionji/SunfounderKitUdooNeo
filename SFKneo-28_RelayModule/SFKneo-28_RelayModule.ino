int Relay = 8;
 
void setup(){
  pinMode(Relay, OUTPUT); 
}
 
void loop(){
  digitalWrite(Relay, HIGH);  // turn on relay
  delay(2000);
  digitalWrite(Relay, LOW);   // turn off relay
  delay(2000);
}
