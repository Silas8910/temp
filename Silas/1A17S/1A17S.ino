
void setup() {
  DDRD |= B11110000;
  DDRD &= B11110011;
  DDRB  = B11111111;
  DDRC  = B11111111;
}
void loop() {
  if((PIND & B00001100)>0){
    PORTD &= B00000011;
    PORTD |= B10100000;
    delay(5000);
    PORTD &= B00000011;
    PORTD |= B01010000;
  }    
}
