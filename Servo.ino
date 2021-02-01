#include <Servo.h> //Servo library
int servoPin = 3;


Servo servo_test;//Initialize a servo object for the connected servo

int angle=0;

void setup()
{
  servo_test.attach(servoPin);//Attach the signal pin of servo to pin3 of arduino 
}
void loop()
{
  servo_test.write(0);
 delay(2000);
 servo_test.write(60);
 delay(2000);
 servo_test.write(180);
 delay(2000);
  
}
