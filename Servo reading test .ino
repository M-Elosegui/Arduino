
#include <Servo.h>

Servo servo1;  // create servo object to control a servo

int input;  // analog pin used to connect the potentiometer
int valor;    // variable to read the value from the analog pin
int valor1;

void setup() {
  servo1.attach(2); // attaches the servo on pin 9 to the servo object
Serial.begin(9600);

}

void loop() {
  input = analogRead(1);            // reads the value of the potentiometer (value between 0 and 1023)
  valor1 = map(input, 0, 1023, 0, 180);     // scale it to use it with the servo (value between 0 and 180)
  servo1.write(valor1);                  // sets the servo position according to the scaled value
  delay(15);   

  Serial.print(input);
  Serial.print("      ");
    Serial.print(valor1);
  Serial.print("      ");
  Serial.println(valor);
    
  // waits for the servo to get there
}
