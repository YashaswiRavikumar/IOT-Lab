int led = 13;
const int gas = 0;
int gaspin = A0;
void setup()
{
  Serial.begin(9600);
}
void loop()
{
  float value = analogRead(gaspin);
  if(value >= 250)
  {
    digitalWrite(led,HIGH);
    Serial.println("Sensor value : ");
    Serial.print(value);
    Serial.print("   SMOKE");
    delay(value);
  }
  else
  {
    digitalWrite(led,LOW);
    Serial.println("Sensor value : ");
    Serial.print(value);
  }
  delay(1000);
}
    
