int Led = 13 ;
int Shock = 3 ;
int val ;

void setup (){
  Serial.begin(115200);
  pinMode (Led, OUTPUT) ;
  pinMode (Shock, INPUT) ;
}

void loop (){
  val = digitalRead (Shock) ;
 
  if (val == HIGH) {
    digitalWrite (Led, LOW);
  }
  else{
    digitalWrite (Led, HIGH);
  }
}
