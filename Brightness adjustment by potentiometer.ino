const int analogPin = A0; 
const int ledPin = 13;
int inputValue = 0;
int outputValue = 0;
void setup()
{
  pinMode(analogPin,INPUT);
  pinMode(ledPin,OUTPUT);

  
}
void loop()
{
inputValue = analogRead(analogPin);//read the value from the sensor
outputValue = map(inputValue,0,1023,0,255);//Convert from 0-1023 proportional to the number of a number of from 0 to 255
analogWrite(ledPin,outputValue);//turn the led on depend on the output value
}
