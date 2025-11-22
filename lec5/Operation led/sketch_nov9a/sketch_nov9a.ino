int led = 13; // رقم البن اللي فيه الليد
void setup() {
  // put your setup code here, to run once:
  pinMode(led, OUTPUT); // نحدد إن البن ده إخراج
}
void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(led, HIGH); // نشغل الليد
  delay(1000);             // ننتظر ثانية
  digitalWrite(led, LOW);  // نطفي الليد
  delay(1000);             // ننتظر ثانية
}
