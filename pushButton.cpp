int redLED=4;
int buttonPin=12;
int buttonRead;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(redLED, OUTPUT);
  pinMode(buttonPin, INPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  buttonRead=digitalRead(buttonPin);
  Serial.println(buttonRead);

  if(buttonRead == 0){
    digitalWrite(redLED, HIGH);
    }

  if(buttonRead==1){
      digitalWrite(redLED, LOW);
    }

}
