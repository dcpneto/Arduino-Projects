#include <HCSR04.h>
const int PIN_TRIGGER=5;
const int PIN_ECHO=3;
const int LED_VERMELHO=7;
const int LED_VERDE=8;
int i;

UltraSonicDistanceSensor sensor(PIN_TRIGGER,PIN_ECHO);

void setup() {
  pinMode(LED_VERMELHO,OUTPUT);
  pinMode(LED_VERDE,OUTPUT);
  Serial.begin(9600);
}

void apagarLeds(){
  digitalWrite(LED_VERMELHO,LOW);
  digitalWrite(LED_VERDE,LOW);
}

void loop() {
  double distancia=sensor.measureDistanceCm();
  Serial.println(distancia);
  apagarLeds();
  if (distancia!=-1.0){
     if (distancia<10.0){
      digitalWrite(LED_VERMELHO,HIGH);
      for (i=0;i<7;i++){
      delay (300);
      }
      digitalWrite(LED_VERMELHO,LOW);
    }else if(distancia<25.0){
      digitalWrite(LED_VERMELHO,HIGH);
      for (i=0;i<7;i++){
      delay (300);
      }
      digitalWrite(LED_VERMELHO,LOW);
    }else if(distancia<40.0){
      digitalWrite(LED_VERMELHO,HIGH);
      for (i=0;i<7;i++){
      delay (300);
      };
      digitalWrite(LED_VERMELHO,LOW);
    }else{
      digitalWrite(LED_VERDE,HIGH);
      for (i=0;i<7;i++){
      delay (300);
      }
      digitalWrite(LED_VERDE,LOW);
    }
  }
  if (distancia!=-1.0){
     if (distancia<10.0){
      delay (30);
    }else if(distancia<25.0){
      delay (80);
    }else if(distancia<40.0){
      delay (120);
    }else{
      delay (200);
     }
    }
}
