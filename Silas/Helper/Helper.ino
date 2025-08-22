void setup() {
  Serial.begin(9600);
  Serial.println("void setup() {");
  for(int i = 4;i<14;i++){
    Serial.print("  pinMode(");
    Serial.print(i);
    Serial.println(",OUTPUT);");
  }
  Serial.println("}");
  Serial.println("void loop() {");
  for(int i = 4;i<14;i++){
    Serial.print("  digitalWrite(");
    Serial.print(i);
    Serial.println(",HIGH);");
  }
}

void loop() {
}
