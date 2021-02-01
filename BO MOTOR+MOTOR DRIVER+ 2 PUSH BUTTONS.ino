void setup()
{
pinMode(3, INPUT);      //  push button for forword
pinMode(13, OUTPUT);    // controling motor m11
pinMode(12, OUTPUT);    // controling motor m12
pinMode(11, OUTPUT);    // controling motor m21
pinMode(10, OUTPUT);    // controling motor m22
pinMode(6, INPUT);      //  push button for right turn 
}
void loop(){
  //for forword
  if (digitalRead(6) == HIGH) 
  {      
digitalWrite(13, HIGH);
digitalWrite(12, LOW);
digitalWrite(11, HIGH);
digitalWrite(10, LOW);
  }
  //for right turn
  else if (digitalRead(3) == HIGH) {       
digitalWrite(13, HIGH);
digitalWrite(12, LOW);
digitalWrite(11, LOW);
digitalWrite(10, HIGH);
  }
  //for stop or don't push any button
  else {                                  //stop when there is no button press
digitalWrite(13, LOW);
digitalWrite(12, LOW);
digitalWrite(11, LOW);
digitalWrite(10, LOW);
 }
}
