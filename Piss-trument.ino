void setup() {
  // put your setup code here, to run once:
  pinMode(3, INPUT);
  pinMode(4, INPUT);
  pinMode(5, INPUT);
  pinMode(6, INPUT);
  pinMode(7, INPUT);
  pinMode(8, INPUT);
  pinMode(9, INPUT);
  pinMode(10, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:

  if (digitalRead(3) == HIGH) {
    tone(10, 300, 1000);
  } else if (digitalRead(4) == HIGH) {
    tone(10, 100, 1000);
  } else if (digitalRead(5) == HIGH) {
    tone(10, 200, 1000);
  } else if (digitalRead(6) == HIGH) {
    tone(10, 400, 1000);
  } else if (digitalRead(7) == HIGH) {
    tone(10, 500, 1000);
  } else if (digitalRead(8) == HIGH) {
    tone(10, 600, 1000);
  } else if (digitalRead(9) == HIGH) {
    tone(10, 700, 1000);
  }

}
