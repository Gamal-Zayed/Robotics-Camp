/*

*/
int our_value = 0;
void setup() {
  pinMode(13, OUTPUT);
}

void loop() {
  our_value = analogRead(A0);
  digitalWrite(13, HIGH);
  delay(our_value);
  digitalWrite(13, LOW);
  delay(our_value);
}