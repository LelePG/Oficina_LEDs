int leitura_potenciometro;

void setup() {
  //O pino A0 é onde será conectado o potenciômetro, e o pino 9 onde será conectado o LED
  pinMode(A0,INPUT);
  pinMode(9,OUTPUT);
}

void loop() {
  //leitura_potenciometro = map(analogRead(A0), 0, 1023, 0, 255);
  leitura_potenciometro = analogRead(A0); //faz a leitura do potenciômetro
  analogWrite(9,leitura_potenciometro); //Escreve esse dado no LED
}
