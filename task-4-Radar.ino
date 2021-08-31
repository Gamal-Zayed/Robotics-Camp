/*

*/

void setup() {
  Serial.begin(9600);
  }

void loop() {
  pinMode(11,OUTPUT);
  digitalWrite(11,HIGH); // VCC
  
  float t_micro;
  pinMode(12,OUTPUT);
  digitalWrite(12, LOW); // trigger
  delay(2); // Just for cheering up
  digitalWrite(12,HIGH);
  delay(5);
  digitalWrite(12, LOW);
  
  pinMode(13, INPUT);  //signal
  t_micro = pulseIn(13, HIGH);
  float my_distance = t_micro / 58.83;
  Serial.print("Wow! the nearest body is at distance =");
  Serial.print(t_micro);
  Serial.print(" cm");
  delay(100)
}
