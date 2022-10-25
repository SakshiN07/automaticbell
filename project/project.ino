int analogInPin = A5; 
int out =13;

int sensorValue = 0; 
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);

  pinMode(out, OUTPUT);

}

void loop() {
  
  sensorValue = analogRead(analogInPin);





  Serial.print("sensor = " );

  Serial.println(sensorValue);



  delay(400);

  

  if(sensorValue<500)

  {

    digitalWrite(out,1);

  }

  else

  {

    digitalWrite(out,0);

  }

  

}
