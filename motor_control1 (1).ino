//Motor Control
//

int rightEn = 3;
int forRight = 4;
int revRight = 5;
void setup()
{
  pinMode(rightEn, OUTPUT);
  pinMode(forRight, OUTPUT);
  pinMode(revRight, OUTPUT);
}

void loop()
{
  analogWrite (rightEn, 255);
  rightFor();
  digitalWrite(LED_BUILTIN, HIGH);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(LED_BUILTIN, LOW);
  delay(1000); // Wait for 1000 millisecond(s)
}

void rightFor(){
  digitalWrite(revRight, LOW);
  digitalWrite(forRight, HIGH);
}

void rightRev(){
  digitalWrite(forRight, LOW);
  digitalWrite(revRight, HIGH);
}