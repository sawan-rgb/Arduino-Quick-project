#include <Servo.h> //Servo library



Servo servo_test;//Initialize a servo object for the connected servo

int angle=0;
int servoPin = 3;
int potentio=A0;

void setup()
{
  servo_test.attach(servoPin);//Attach the signal pin of servo to pin3 of arduino 
}
void loop()
{
  angle = analogRead(potentio);
  angle = map(angle,0,1023,0,179);//scaling the potentiometer value to angle value for servo between 0 and 180
  servo_test.write(angle);
 delay(5);
  
}
