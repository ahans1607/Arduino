int redPIN=4;
int greenPIN=3;
int bluePIN=2;

String myColor;
String msg="What Colour Co You Want?";

void setup(){
  pinMode(redPIN, OUTPUT);
  pinMode(greenPIN, OUTPUT);
  pinMode(bluePIN, OUTPUT);

  Serial.begin(9600);
}

void loop(){
  Serial.println(msg);

  while(Serial.available()==0){
    }

   myColor=Serial.readString();

   if(myColor=="red" || myColor=="Red"){
    digitalWrite(redPIN, HIGH);
    digitalWrite(greenPIN, LOW);
    digitalWrite(bluePIN, LOW);
    }

    if(myColor=="green" || myColor=="Green"){
    digitalWrite(redPIN, LOW);
    digitalWrite(greenPIN, HIGH);
    digitalWrite(bluePIN, LOW);
    }
    
    if(myColor=="blue" || myColor=="Blue"){
    digitalWrite(redPIN, LOW);
    digitalWrite(greenPIN, LOW);
    digitalWrite(bluePIN, HIGH);
    }
 
}
