const int trigPin = 7;      // trig pin of HC-SR04
const int echoPin = 6;     // Echo pin of HC-SR04
const int revleft3 = 10;       //REVerse motion of Left motor
const int fwdleft2 = 9;       //ForWarD motion of Left motor
const int revright1 = 13;      //REVerse motion of Right motor
const int fwdright0 = 12;      //ForWarD motion of Right motor
long duration, distance;
void setup() {
  
  delay(random(500,2000));   // delay for random time
  Serial.begin(9600);
  pinMode(revleft3, OUTPUT);      // set Motor pins as output
  pinMode(fwdleft2, OUTPUT);
  pinMode(revright1, OUTPUT);
  pinMode(fwdright0, OUTPUT);
  
  pinMode(trigPin, OUTPUT);         // set trig pin as output
  pinMode(echoPin, INPUT);          //set echo pin as input to capture reflected waves
}
void loop() {
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);   
  digitalWrite(trigPin, HIGH);     // send waves for 10 us
  delayMicroseconds(10);
  duration = pulseIn(echoPin, HIGH); // receive reflected waves
  distance = duration / 58;   // convert to distance
  delay(10);
    // If you dont get proper movements of your robot then alter the pin numbers
  if (distance > 19)            
  {
    digitalWrite(fwdright0, HIGH);                    // move forward
    digitalWrite(revright1, LOW);
    digitalWrite(fwdleft2, HIGH);                                
    digitalWrite(revleft3, LOW);                                                       
  }
  else
  {
    digitalWrite(fwdright0, LOW);  //Stop                
    digitalWrite(revright1, LOW);
    digitalWrite(fwdleft2, LOW);                                
    digitalWrite(revleft3, LOW);
    delay(500);
    digitalWrite(fwdright0, LOW);      //movebackword         
    digitalWrite(revright1, HIGH);
    digitalWrite(fwdleft2, LOW);                                
    digitalWrite(revleft3, HIGH);
    delay(500);
    digitalWrite(fwdright0, LOW);  //Stop                
    digitalWrite(revright1, LOW);
    digitalWrite(fwdleft2, LOW);                                
    digitalWrite(revleft3, LOW);  
    delay(100);  
    digitalWrite(fwdright0, HIGH);       
    digitalWrite(revright1, LOW);   
    digitalWrite(fwdleft2, LOW);                                 
    digitalWrite(revleft3, LOW);  
    delay(500);
  }
}
