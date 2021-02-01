const int pingpin=7;
const int echopin=6;
int buzzer = 10;


void setup() {
  Serial.begin(9600);
  pinMode(pingpin,OUTPUT);
  pinMode(echopin,INPUT);
  pinMode(buzzer,OUTPUT);
  // put your setup code here, to run once:

}

void loop() {
  long duration,inches,cm;
  digitalWrite(pingpin,LOW);
  delayMicroseconds(2);
  digitalWrite(pingpin,HIGH);
  delayMicroseconds(10);
  digitalWrite(pingpin,LOW);
  duration = pulseIn(echopin,HIGH);
  inches = microsecondsToInches(duration);
  cm = microsecondsToCentimeters(duration);
  if (inches<10){
    tone(buzzer, 2000, 500);
    //digitalWrite(buzzer,HIGH);
    delay(500);
  }
  else{
    digitalWrite(buzzer,LOW);
    delay(500);
  }
  Serial.print(inches);
  Serial.print("in, ");
  Serial.print(cm);
  Serial.print("cm");
  Serial.println();
  delay(100);
  
  
  // put your main code here, to run repeatedly:

}

long microsecondsToInches(long microseconds){
  return microseconds/74/2;
}
long microsecondsToCentimeters(long microseconds){
  return microseconds/29/2;
}
