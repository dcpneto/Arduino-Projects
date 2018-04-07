int leds[] = {13, 12, 11, 10, 9}; 
int gas = A0; 
int valGas = 0;

void setup() {
  for(int i = 0; i < 5; i++) {
  pinMode(leds[i], OUTPUT); 
}
  Serial.begin(9600);
}

void loop() {
valGas = analogRead(gas);  
Serial.println(valGas);
if(valGas < 90) 
    {
      digitalWrite(leds[0], HIGH); 
      digitalWrite(leds[1], LOW);
      digitalWrite(leds[2], LOW);
      digitalWrite(leds[3], LOW);
      digitalWrite(leds[4], LOW);
    }
    else if (valGas > 90 && valGas < 140)
     {
      digitalWrite(leds[0], LOW); 
      digitalWrite(leds[1], HIGH);
      digitalWrite(leds[2], LOW);
      digitalWrite(leds[3], LOW);
      digitalWrite(leds[4], LOW);
     }
  
    else if (valGas > 140 && valGas < 190)
     {
      digitalWrite(leds[0], LOW); 
      digitalWrite(leds[1], LOW);
      digitalWrite(leds[2], HIGH);
      digitalWrite(leds[3], LOW);
      digitalWrite(leds[4], LOW);
     }
  
    else if (valGas > 240 && valGas < 290)
     {
      digitalWrite(leds[0], LOW); 
      digitalWrite(leds[1], LOW);
      digitalWrite(leds[2], LOW);
      digitalWrite(leds[3], HIGH);
      digitalWrite(leds[4], LOW);
     }
    else{
      digitalWrite(leds[0], LOW); 
      digitalWrite(leds[1], LOW);
      digitalWrite(leds[2], LOW);
      digitalWrite(leds[3], LOW);
      digitalWrite(leds[4], HIGH);
    }
  delay(500); 
}
