/*

*/

void setup() {
  Serial.begin(9600);
  }

void loop() {
  float t_micro;
  pinMode(7,OUTPUT);
  digitalWrite(7, LOW);
  delay(2); // Just for cheering up
  digitalWrite(7,HIGH);
  delay(5);
  digitalWrite(7, LOW);
  
  pinMode(7, INPUT);
  t_micro = pulseIn(7, HIGH);
  float my_distance = t_micro / 58.83;
  Serial.print("Wow! the nearest body is at distance =");
  Serial.print(t_micro);
  Serial.print(" cm");
  delay(100)
}
