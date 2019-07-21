int leitura_potenciometro;

void setup() {
  pinMode(A0,INPUT);
  pinMode(9,OUTPUT);
}

void loop() {
  //leitura_potenciometro = map(analogRead(A0), 0, 1023, 0, 255);
  leitura_potenciometro = analogRead(A0);
  analogWrite(9,leitura_potenciometro);
  
}
