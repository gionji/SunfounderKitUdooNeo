int redpin = 11; 
int greenpin = 10; 
int val;

void setup () {
   Serial.begin(115200);
   pinMode (redpin, OUTPUT);
   pinMode (greenpin, OUTPUT);
}

void loop () {
   for (val = 255; val> 0; val--){
      analogWrite (greenpin, val);
      analogWrite (redpin, 255-val);
      delay (15);
   }
   
   for (val = 0; val <255; val++){
      analogWrite (greenpin, val);
      analogWrite (redpin, 255-val);
      delay (15);
   }  
}
