int ldr = A0;
int ldrvalue = 0;
int light_sensitivity = 500;
void setup()
{
  Serial.begin(9600);
  pinMode(11, OUTPUT);
}
void loop()
{
  ldrvalue = analogRead(ldr);
  Serial.print(ldrvalue);
  delay(50);
  if(ldrvalue < light_sensitivity)
  {
    digitalWrite(11,HIGH);
  }
  else
  {
    digitalWrite(11,LOW);
  }
  delay(1000);
}
