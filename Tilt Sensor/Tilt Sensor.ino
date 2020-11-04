int tilt = 2;         // the number of the input pin
int led = 13;       // the number of the output pin

void setup()
{
  pinMode(tilt, INPUT);
  pinMode(led, OUTPUT);
}
 
void loop()
{
  int reading;
  reading = digitalRead(tilt);
  
  if(reading==0)
    digitalWrite(led, LOW);
  else
    digitalWrite(led, HIGH);
}
