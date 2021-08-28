int our_state = 0;
void setup() {
  // put your setup code here, to run once:
pinMode(13, OUTPUT); // we will make pin#13 as an output
pinMode(2, INPUT); // the pin button will be an input
}

void loop() {
  // put your main code here, to run repeatedly:
  our_state = digitalRead(2);
  if (our_state == HIGH)
    digitalWrite(13, HIGH);
  else
    digitalWrite(13, LOW);
}
