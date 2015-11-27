int Led = 13 ;
int buttonpin = 3; 
int val ;

void setup (){
  Serial.begin(115200);
  pinMode (Led, OUTPUT) ;
  pinMode (buttonpin, INPUT) ;
}

void loop (){
  val = digitalRead (buttonpin) ;
  if (val == HIGH)   {
    digitalWrite (Led, HIGH);
  }
  else  {
    digitalWrite (Led, LOW);
  }
}
