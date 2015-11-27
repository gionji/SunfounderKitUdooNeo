void setup(){
  Serial.begin(115200);
}

void loop(){
  Serial.println(digitalRead(2));
  delay(100);
}
