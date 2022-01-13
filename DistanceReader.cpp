int triggerPin=12;
int echoPin=11;
int pingTravelTime;
float pingTravelDistance;
float distanceToTarget;

void setup() {
  // put your setup code here, to run once:
  pinMode(triggerPin, OUTPUT);
  pinMode(echoPin, INPUT);

  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(triggerPin, LOW);
  delayMicroseconds(10);
  digitalWrite(triggerPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(triggerPin, LOW);
  pingTravelTime = pulseIn(echoPin, HIGH);
  delay(25);

  pingTravelDistance=(pingTravelTime*765.*5380.*12.)/(3600.*1000000.);
  distanceToTarget=pingTravelDistance/2;

  Serial.print("Distance to Target is ");
  Serial.print(distanceToTarget);
  Serial.println(" Inches.");
  
}
