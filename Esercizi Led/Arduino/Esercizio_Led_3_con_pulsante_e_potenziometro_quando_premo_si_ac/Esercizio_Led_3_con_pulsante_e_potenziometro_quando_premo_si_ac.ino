int ledpin = 4; //definiamo il pin 4 con il nome ledpin
int pushbutton = 7; //definiamo il pin 7 con il nome pushbutton
int analogval = 0; 
int digitalval = 0;
int potpin = A0;

void setup() {
  // put your setup code here, to run once:

  pinMode(ledpin, OUTPUT); //inizializziamo il pin del led come output
  pinMode(pushbutton, INPUT); //inizializziamo il pin del led come input
}

void loop() {
  // put your main code here, to run repeatedly:

  digitalval = digitalRead(pushbutton); //leggiamo lo stato del pulsante
  analogval = analogRead(potpin);

  if (digitalval == 1) { //se lo stato del pulsante è 1
    digitalWrite(ledpin, HIGH); //accendi il led
    delay(analogval);
    digitalWrite(ledpin, LOW);
    delay(analogval);
  }
  else {//altrimenti
    digitalWrite(ledpin, LOW); //spegni il led
  }
  delay(analogval); //ritardo prima di ripetere il ciclo
}
