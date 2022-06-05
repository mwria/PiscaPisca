int ledr=7, ledy=6, ledg=5;

void setup() {
  pinMode(ledr, OUTPUT);
  pinMode(ledy, OUTPUT);
  pinMode(ledg, OUTPUT);
}

void loop() {
 digitalWrite(ledr, HIGH);
 delay(10000);
 digitalWrite(ledr,LOW);
 digitalWrite(ledg, HIGH);
 delay(5000);
 digitalWrite(ledg,LOW);
 digitalWrite(ledy, HIGH);
 delay(3000);
 digitalWrite(ledy,LOW);

}
