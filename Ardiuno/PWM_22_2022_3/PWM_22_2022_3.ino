void setup() {
  // put your setup code here, to run once:
 pinMode(3,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(3,HIGH);
  delayMicroseconds(4);
  digitalWrite(3,LOW);
  delayMicroseconds(2000);
}