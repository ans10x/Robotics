void setup()
{
pinMode(11, OUTPUT);
pinMode(10, OUTPUT);

pinMode(6, OUTPUT);
pinMode(5, OUTPUT);

}

void loop()
{
digitalWrite(11, HIGH);
digitalWrite(6, HIGH);

delay(1000); // Wait for 1000 millisecond(s)

digitalWrite(11, LOW);
digitalWrite(6, LOW);

delay(1000); // Wait for 1000 millisecond(s)

digitalWrite(10, HIGH);
digitalWrite(5, HIGH);

delay(1000); // Wait for 1000 millisecond(s)

digitalWrite(10, LOW);
digitalWrite(5, LOW);

delay(1000); // Wait for 1000 millisecond(s)

}