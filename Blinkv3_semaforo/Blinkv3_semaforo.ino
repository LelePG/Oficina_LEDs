#define LED1 8
#define LED2 9
#define LED3 10
// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
  pinMode(LED3, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(LED1, HIGH);  
  delay(2000);                      
  digitalWrite(LED1, LOW);   
 
  digitalWrite(LED2, HIGH);  
  delay(500);                      
  digitalWrite(LED2, LOW);   
   
  digitalWrite(LED3, HIGH);  
  delay(2000);                      
  digitalWrite(LED3, LOW);  

  digitalWrite(LED2, HIGH);  
  delay(500);                      
  digitalWrite(LED2, LOW);  
  
}
