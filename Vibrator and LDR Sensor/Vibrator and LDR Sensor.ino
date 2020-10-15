int motorpin = 3;
int sensorpin = A1;
int threshold = 400;
void setup()
{
  pinMode(motorpin,OUTPUT);
  Serial.begin(9600);
}
void loop()
{
  int value = analogRead(sensorpin);
  Serial.println(value);
  
  if(value > threshold)
  {
    digitalWrite(motorpin,HIGH);
  }
  else
  {
    digitalWrite(motorpin,LOW);
  }
  delay(1000);
}
