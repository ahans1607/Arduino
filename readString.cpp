int redLED=5;
int blueLED=4;
int whiteLED=3;

String color;
String msg="What color LED would you like to turn on?";
String msg2=" LED is on";


void setup(){
  pinMode(redLED, OUTPUT);
  pinMode(blueLED, OUTPUT);
  pinMode(whiteLED, OUTPUT);

  Serial.begin(9600);
}

void loop(){
  Serial.println(msg);

  while(Serial.available() == 0){
    }
    
  color=Serial.readString();

  if(color == "Red" || color == "red"){
    digitalWrite(redLED, HIGH);
    digitalWrite(blueLED, LOW);
    digitalWrite(whiteLED, LOW);
    Serial.print(color);
    Serial.println(msg2);
    }

   if(color == "Blue" || color == "blue"){
    digitalWrite(redLED, LOW);
    digitalWrite(blueLED, HIGH);
    digitalWrite(whiteLED, LOW);
    Serial.print(color);
    Serial.println(msg2);
    }

    if(color == "White" || color == "white"){
    digitalWrite(redLED, LOW);
    digitalWrite(blueLED, LOW);
    digitalWrite(whiteLED, HIGH);
    Serial.print(color);
    Serial.println(msg2);
    }
 
}
