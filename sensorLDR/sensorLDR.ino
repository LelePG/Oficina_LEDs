int valor_sensor;
void setup() {
  pinMode(9,OUTPUT);//Led
  pinMode(A0,INPUT);//Sensor de luz
  //Serial.begin(9600);
}

void loop() {
  valor_sensor = analogRead(A0);
 // Serial.println(valor_sensor);
  if(valor_sensor < 100){
    digitalWrite(9,HIGH);
  }else{
    digitalWrite(9,LOW);
  }

}
