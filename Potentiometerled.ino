int ledpin = 9;
void setup()
{
  Serial.begin(9600);
  pinMode(ledpin, OUTPUT);
}
void loop()
{
  int analogValue = analogRead(A0);
  int brightness = map(analogValue, 0, 1023 , 0 , 255);
  analogWrite(ledpin, brightness);
  Serial.print("Analog: ");
  Serial.print(analogValue);
  Serial.print(" , Brightness: ");
  Serial.print(brightness);
  delay(100);
}
