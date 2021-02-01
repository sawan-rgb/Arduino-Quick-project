int Mic=A0;//It will send electronic signal according to the sound.
int LED=13;//Led light for signal
int val=0;//

void setup(){
pinMode(Mic,INPUT);
pinMode(LED,OUTPUT);
}


void loop(){
val=analogRead(Mic);

if(val>700)
//When the value is above 700, LED will be turned HIGH
{
digitalWrite(LED, HIGH);
delay(1000);
} else
{
digitalWrite(LED, LOW);
delay(1000);
}}
