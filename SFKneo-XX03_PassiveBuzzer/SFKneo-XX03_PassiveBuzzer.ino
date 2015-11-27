int buzzer = 8 ;

void setup (){
  Serial.begin(115200);
  pinMode (buzzer, OUTPUT) ;
}

void loop (){
  unsigned char i, j ;
  while (1)
  {
    for (i = 0; i <80; i++) 
    {
      digitalWrite (buzzer, HIGH) ;
      delay (1) ;
      digitalWrite (buzzer, LOW) ;
      delay (1) ;
    }
    for (i = 0; i <100; i++) 
    {
      digitalWrite (buzzer, HIGH) ;
      delay (2) ;
      digitalWrite (buzzer, LOW) ;
      delay (2) ;
    }
  }
}
