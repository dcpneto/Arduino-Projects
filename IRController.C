#include <IRremote.h>

#define irLedVermelho 13
#define irLedVerde 12
#define irLedAzul 11
#define irSensorPin 8

IRrecv irrecv(irSensorPin);
decode_results results;

void setup()
{
  Serial.begin(9600); 
  delay(100); 
  irrecv.enableIRIn(); 
  pinMode(irLedVermelho, OUTPUT);
  pinMode(irLedVerde, OUTPUT);
  pinMode(irLedAzul, OUTPUT);
}

void loop()
{  
    if (irrecv.decode(&results)) {
    long int decCode = results.value;
    Serial.println(decCode);
    
   switch (results.value) {
      case 16582903:
        digitalWrite(irLedVermelho, HIGH);
    	delay(1000);
        digitalWrite(irLedVermelho, LOW);
        break;
     case 16615543:
        digitalWrite(irLedVerde, HIGH);
    	delay(1000);
        digitalWrite(irLedVerde, LOW);
        break;
     case 16599223:
        digitalWrite(irLedAzul, HIGH);
    	delay(1000);
        digitalWrite(irLedAzul, LOW);
        break;
      
     }

    irrecv.resume();
  }
}
