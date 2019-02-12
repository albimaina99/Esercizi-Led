int ledpin = 4; //definiamo il pin 4 con il nome ledpin

void setup() {
  // put your setup code here, to run once:
  pinMode(4, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(ledpin, HIGH);  // accendi il led
  delay(analogRead(0));       // aspetta per quanto letto dal pin A0
  digitalWrite(ledpin, LOW);   // spegni il led
  delay(analogRead(0));       // aspetta per quanto letto dal pin A0
}
