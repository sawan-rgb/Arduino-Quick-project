
//Output from IR sensor. 0 if there is an obstacle. 1 either.
int obstaclePin = 7; 

// LED output
int LED=12;

//status of IR sensor
int hasObstacle = LOW;

void setup() {
  pinMode(LED, OUTPUT);
  pinMode(obstaclePin, INPUT);
}
void loop() {
  hasObstacle = digitalRead(obstaclePin);
  if (hasObstacle == HIGH) //If there is an obstacle, LED will be turned high
  {
    digitalWrite(LED, LOW);
  }
  else
  {
    digitalWrite(LED, HIGH);
  }
  delay(200);
}
