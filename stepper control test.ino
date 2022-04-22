#include <Stepper.h>

int readX;
int MotorSpeed;
int MotorSpeed2;

#define ms1 4
#define ms2 5
#define ms3 6

       

const int stepsPerRevolution = 200;

Stepper nema = Stepper(stepsPerRevolution, 2, 3);



void setup() {

Serial.begin(9600);

   digitalWrite(ms1, HIGH);
          digitalWrite(ms2, HIGH);
          digitalWrite(ms3, HIGH);

}


void loop() {
   
  readX = analogRead(A0);



// CODIGO CODIGO CODIGO CODIGO CODIGO CODIGO CODIGO CODIGO CODIGO

MotorSpeed = map(readX, 580, 1023, 0, 20);
MotorSpeed2 = map(readX, 580, 1023, 0, 100);


 if (MotorSpeed > 0) {
    nema.setSpeed(MotorSpeed2);
     //step 1/100 of a revolution:
     nema.step(MotorSpeed);

 }



 /* 
 
 if (MotorSpeed > 0) {
    nema.setSpeed(MotorSpeed);
     //step 1/100 of a revolution:
     nema.step(20);

 }
 
*/


//delay(10);


//motorDir.setSpeed(velMotorDir);
//motorEsq.setSpeed(velMotorEsq);
//motorEsq.step(sinalStepEsq);
//motorDir.step(sinalStepDir);




// CODIGO CODIGO CODIGO CODIGO CODIGO CODIGO CODIGO CODIGO CODIGO



//Serial.print("X,A1,esquerdo"); 
//Serial.print(" --> "); 
Serial.print(readX); 
Serial.print("   "); 
//Serial.print("Y,A0,direito"); 
//Serial.print(" --> "); 
//Serial.print(lerY);
//Serial.print("         "); 
Serial.print("velocidade motor:"); 
Serial.print(" --> "); 
//Serial.print(velMotorDir); 
//Serial.print("    "); 
Serial.println(MotorSpeed); 


}








  
