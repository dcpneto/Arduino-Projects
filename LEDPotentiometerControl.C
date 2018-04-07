int leds[] = {12, 11, 10, 9, 8}; 
int poten = A5; 
int valorPotenciometro = 0; 


void setup() {
for(int i = 0; i < 5; i++) 
{
  pinMode(leds[i], OUTPUT); 
}

}

void loop() {
  valorPotenciometro = analogRead(poten); 

    if(valorPotenciometro < 201) 
    {
      digitalWrite(leds[0], HIGH); 
      digitalWrite(leds[1], LOW);
      digitalWrite(leds[2], LOW);
      digitalWrite(leds[3], LOW);
      digitalWrite(leds[4], LOW);
    }
    else if (valorPotenciometro > 200 && valorPotenciometro < 401)
     {
      digitalWrite(leds[1], HIGH);
      digitalWrite(leds[0], LOW);
      digitalWrite(leds[2], LOW);
      digitalWrite(leds[3], LOW);
      digitalWrite(leds[4], LOW);
     }
    else if (valorPotenciometro > 400 && valorPotenciometro < 601)
     {
      digitalWrite(leds[2], HIGH); 
      digitalWrite(leds[1], LOW);
      digitalWrite(leds[0], LOW);
      digitalWrite(leds[3], LOW);
      digitalWrite(leds[4], LOW);
     }  
    else if (valorPotenciometro > 600 && valorPotenciometro < 801)
     {
      digitalWrite(leds[3], HIGH);
      digitalWrite(leds[2], LOW);
      digitalWrite(leds[1], LOW);
      digitalWrite(leds[0], LOW);
      digitalWrite(leds[4], LOW);
     }
    else
     {
      digitalWrite(leds[4], HIGH); 
      digitalWrite(leds[3], LOW);
      digitalWrite(leds[2], LOW);
      digitalWrite(leds[1], LOW);
      digitalWrite(leds[0], LOW);
     }
 
}
