int Mic=A0;
int LED=13;
int val;
void setup(){
pinMode(Mic, INPUT);
pinMode(LED,OUTPUT);
Serial.begin(9600);
}
void loop(){
val=analogRead(Mic);
Serial.print("Mic value is ");
Serial.println(val);
if(val>700)
{
digitalWrite(LED, HIGH);
delay(1000);
} else
{
digitalWrite(LED, LOW);
delay(1000);
}
}
