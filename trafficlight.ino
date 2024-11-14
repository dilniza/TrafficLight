int green = 6;
int yellow = 7;
int red = 8;

void setup() {
  pinMode(green, OUTPUT);
  pinMode(yellow, OUTPUT);
  pinMode(red, OUTPUT);
}

void loop() {
  digitalWrite(green, HIGH);
  delay(10000);
  digitalWrite(green, LOW);

  digitalWrite(yellow, HIGH);
  delay(3000);
  digitalWrite(yellow, LOW);
  delay(500);
    digitalWrite(yellow, HIGH);
  delay(1000);
  digitalWrite(yellow, LOW);
  delay(500);
    digitalWrite(yellow, HIGH);
  delay(1000);
  digitalWrite(yellow, LOW);
  delay(500);
    digitalWrite(yellow, HIGH);
  delay(1000);
  digitalWrite(yellow, LOW);
  delay(500);

    digitalWrite(red, HIGH);
  delay(10000);
  digitalWrite(red, LOW);

  digitalWrite(green, HIGH);
  digitalWrite(red, HIGH);
  digitalWrite(yellow, HIGH);
  delay(5000);
  digitalWrite(green, LOW);
  digitalWrite(red, LOW);
  digitalWrite(yellow, LOW);
}