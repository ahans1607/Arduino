int photoRes=A0;
int lightVal;
int second=1000;

int redLED=7;

void setup() {
  pinMode(photoRes, INPUT);
  pinMode(redLED, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  lightVal=analogRead(photoRes);
  Serial.println(lightVal);
  
  if(lightVal<500){
    digitalWrite(redLED, HIGH);
    lightVal=analogRead(photoRes);
    delay(5000);
    }
    
  digitalWrite(redLED, LOW);
}
