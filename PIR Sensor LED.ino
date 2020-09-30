int LED = 13;
int PIR = 2;
void setup()
{
  pinMode(LED, OUTPUT);
  pinMode(PIR, INPUT);
  Serial.begin(9600);
}
void loop()
{
  if(digitalRead(PIR)==HIGH)
  {
    digitalWrite(LED, HIGH);
    delay(100);
  }
  else
  {
    digitalWrite(LED, LOW);
    delay(100);
  }
}
