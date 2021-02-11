int A0;
int level;
int led = 13;
void setup()
{
  Serial.begin(9600);
  pinMode(13, OUTPUT);
  pinMode(A0,INPUT);
}

void loop()
{
  level = analogRead(A0);
  Serial.println(level);
  if (level<500 && level>500)
  {
    digitalWrite(13,HIGH);
}
  else
  {
    digitalWrite(13,LOW);
  }
