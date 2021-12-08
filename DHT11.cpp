 #include <DHT.h>
 #define Type DHT11
 
 int inputPin=8;
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
}

void loop() {
  // put your main code here, to run repeatedly:
  humidity = HT.readHumidity();
  tempC = HT.readTemperature();
  tempF = HT.readTemperature(true);

  Serial.print("Humidity is ");
  Serial.print(humidity);

  Serial.print(" TempC is ");
  Serial.print(tempC);

  Serial.print(" TempF is ");
  Serial.println(tempF);

  delay(2000);
  
}
