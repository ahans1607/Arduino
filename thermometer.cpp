 #include <DHT.h>
 #include <LiquidCrystal.h>
 #define Type DHT11

int rs=7;
int en=8;
int d4=9;
int d5=10;
int d6=11;
int d7=12;

LiquidCrystal thermo(rs,en,d4,d5,d6,d7);
 
 
 int inputPin=2;
 DHT HT(inputPin, Type);

 float humidity;
 float tempC;
 float tempF;
 
 void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(inputPin, INPUT);
  HT.begin();
  delay(500);

  thermo.begin(16,2);
  
}

void loop() {
  // put your main code here, to run repeatedly:
  humidity = HT.readHumidity();
  tempC = HT.readTemperature();
  tempF = HT.readTemperature(true);

  thermo.setCursor(0,0);
  thermo.print("Temperature is");

  thermo.setCursor(0,1);
  thermo.print(tempF);
  thermo.print(" Degrees F");


  delay(2000);
  
}
