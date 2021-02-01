int data;
void setup()
{
  Serial.begin(9600); //initialize serial COM at 9600 baudrate
  pinMode(13, OUTPUT);    // controling motor m11
  pinMode(12, OUTPUT);    // controling motor m12
  pinMode(11, OUTPUT);    // controling motor m21
  pinMode(10, OUTPUT);    // controling motor m22
  Serial.println("Hi!, I am Arduino");
}
void loop()
{
  data = Serial.read();
    if (data == 'u'){     //for forword
    digitalWrite(13, HIGH);
    digitalWrite(12, LOW);
    digitalWrite(11, HIGH);
    digitalWrite(10, LOW);
    Serial.println("up");
  } 
  else if (data == 'd'){     //for backword
    digitalWrite(12, HIGH);
    digitalWrite(13, LOW);
    digitalWrite(10, HIGH);
    digitalWrite(11, LOW);
    Serial.println("backword");
  } 
  else if (data == 'r') {       //for right turn
    digitalWrite(13, HIGH);
    digitalWrite(12, LOW);
    digitalWrite(11, LOW);
    digitalWrite(10, HIGH);
    Serial.println("right");
  }
  else if (data == 'l') {       //for left turn
    digitalWrite(13, LOW);
    digitalWrite(12, HIGH);
    digitalWrite(11, HIGH);
    digitalWrite(10, LOW);
    Serial.println("left");
  }
else if (data == ' ') {       //for stop
    digitalWrite(13, LOW);
    digitalWrite(12, HIGH);
    digitalWrite(11, HIGH);
    digitalWrite(10, LOW);
    Serial.println("stop");}
    
    }
