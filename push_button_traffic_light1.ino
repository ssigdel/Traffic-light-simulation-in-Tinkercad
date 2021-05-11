void setup()
{
  pinMode(2, INPUT);
  pinMode(13, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(5, OUTPUT);
}

void loop()
{
  if (digitalRead(2)== HIGH){
    
    digitalWrite(13, HIGH);
    delay(3000);
    digitalWrite(13, LOW);
    
    digitalWrite(7, HIGH);
    delay(3000);
    digitalWrite(7, LOW);
    
    digitalWrite(5, HIGH);
    delay(3000);
    digitalWrite(5, LOW);
  }
  else{
    digitalWrite(13, LOW);
    digitalWrite(7, LOW);
    digitalWrite(5, LOW);
  }
  delay(10);
}