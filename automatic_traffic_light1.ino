void setup()
{
  pinMode(4, OUTPUT);// red LED
  pinMode(3, OUTPUT);// yellow LED
  pinMode(2, OUTPUT);// green LED
}

void loop()
{
  digitalWrite(4, HIGH);
  delay(3000); // Wait for 3000 millisecond(s)
  digitalWrite(4, LOW);
  
  digitalWrite(3, HIGH);
  delay(3000); // Wait for 3000 millisecond(s)
  digitalWrite(3, LOW);
  
  digitalWrite(2, HIGH);
  delay(3000); // Wait for 3000 millisecond(s)
  digitalWrite(2, LOW);
}