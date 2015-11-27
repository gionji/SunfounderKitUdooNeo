#include<IRremote.h>

int RECV_PIN = 11; 
IRrecv irrecv (RECV_PIN);
decode_results results;

void setup (){
  Serial.begin (115200);
  irrecv.enableIRIn (); 
}

void loop () {
  if (irrecv.decode (& results)) {
    Serial.println (results.value, HEX);
    irrecv.resume (); 
  }
}



//Main emission part of the code:
#include<IRremote.h>

IRsend irsend;
void setup (){
  Serial.begin (115200);
}

void loop () {
  for (int i = 0; i <50; i + +) {
    irsend.sendSony (0xa90, 12); 
    delay (40);
  }
}
