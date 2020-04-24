
void setup() {
  Serial.begin(9600);
}

void loop() {

    
  
  Serial.print(analogRead(A0));
  Serial.println("");
  
  delay(40); // milliseconds
}
