int obstaclePin = 7;
 int LED=13;
 int hasObstacle = LOW; 
void setup() {
  pinMode(LED, OUTPUT);
  pinMode(obstaclePin, INPUT);
  Serial.begin(9600);  
}
void loop() {
  hasObstacle = digitalRead(obstaclePin); 
  if (hasObstacle == LOW)
  {
    Serial.println("Stop something is ahead!!");
    digitalWrite(LED, HIGH); 
  }
  else
  {
    Serial.println("Path is clear");
    digitalWrite(LED, LOW);
  }
  delay(200);
}
