
int val;

void setup() {
  Serial.begin(9600);
  
  pinMode(LED_BUILTIN, OUTPUT);
  pinMode(A0, INPUT); 
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  

}

void loop() {
  int leitura_bruta = analogRead(A0); 
  float voltagem = leitura_bruta * (5000.0 / 1023.0);
  float temperatura = (voltagem - 500) / 10.0;  
  
  Serial.print("temperatura: ");
  Serial.print(temperatura);
  Serial.println("C");
,
  val = temperatura; 
  
  if (temperatura <= 23) {
    digitalWrite(12, LOW);
    digitalWrite(13, LOW);
  } 
  
  else if (temperatura >= 24 && temperatura <26) {
    digitalWrite(12, HIGH);
    digitalWrite(13, LOW);
  }
  
  else if (temperatura >= 26) {
    digitalWrite(12, HIGH);
    digitalWrite(13, HIGH);
  }
  
  
  delay(1100); 
}