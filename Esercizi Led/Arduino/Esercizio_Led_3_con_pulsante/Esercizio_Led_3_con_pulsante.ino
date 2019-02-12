int ledpin = 4;
int potpin = A0;
int buttonpin = 7;

void setup() {
  // put your setup code here, to run once:

  pinMode(buttonpin, INPUT);
  pinMode(ledpin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  int buttonState = digitalRead(buttonpin);
  int potState = analogRead(potpin);
  if ((buttonState == 1) && (potState > 500)){
      digitalWrite(ledpin, HIGH); //accendi il led
    }
    else {//altrimenti
      digitalWrite(ledpin, LOW); //spegni il led
    }
}
