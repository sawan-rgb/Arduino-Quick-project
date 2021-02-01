
//Choose PWM digital pin,like ~11.
int ledPin=11;

String msg = "Enter your no.";
String msg2 = "Entered no. is=";
int mynumber=0;

void setup() {
  pinMode(ledPin,OUTPUT);
  Serial.begin(9600);
  digitalWrite(ledPin,LOW);
}

void loop() {
  Serial.println(msg);
while (!Serial.available()){
}
mynumber = Serial.parseInt();
Serial.print(msg2);
Serial.println(mynumber);

analogWrite(ledPin,mynumber);
Serial.read();
delay(1000);
}
