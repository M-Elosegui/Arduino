#include <Stepper.h>

int lerX;
int lerY;
int velmotor;

void setup() {

Serial.begin(9600);

}


void loop() {
   
  lerX = analogRead(A0);
  lerY = analogRead(A1);

//velmotor = map(lerX, 500, 1023, 0, 14) - map(lerY, 500, 1023, 0, 14) ;
//- map(lerY, 500, 1023, 14, 0)

Serial.print("X,A1,esquerdo"); 
Serial.print(" --> "); 
Serial.print(lerX); 
Serial.print("   ");
Serial.print(lerY);
Serial.print("       velocidade do motor"); 
Serial.print(" --> "); 
//Serial.print(velmotor);
Serial.println("         "); 


delay(10);

}








  
