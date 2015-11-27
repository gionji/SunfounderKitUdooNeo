int Led = 13 ; 
int SENSOR = 10 ;
int val ; 
 
void setup ()
{
  pinMode (Led, OUTPUT) ;
  pinMode (SENSOR, INPUT) ; 
  Serial.begin(115200);
}
 
void loop ()
{
  val = digitalRead (SENSOR) ; 
  if (val == LOW) 
  {
    digitalWrite (Led, HIGH);
  }
  {
    digitalWrite (Led, LOW);
  }
}
