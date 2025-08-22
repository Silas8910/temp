volatile bool k = 0;

ISR(TIMER1_OVF_vect)
{
  PORTB = 255;
  TIMSK1 &= B11111110;
  k = 0;
    // Enable Timer Overflow Interrupt
}
int main() {
  init()
  DDRD |= B11110000;
  DDRD &= B11110011;
  DDRB  = B11111111;
  DDRC  = B11111111;
  TCCR1A = 0;           // Init Timer1
  TCCR1B = 0;           // Init Timer1
  TCCR1B |= B00000100;  // Prescalar = 64
  TIMSK1 |= B00000001;  // Enable Timer Overflow Interrupt
  while (true) {
    if ((PIND & B00000100) > 0) {
      if (!k) {
        if (PORTB > 0) {
          PORTB = 0;
        } else PORTB = B00000001;
        k = 1;
        TCNT1 = 40535;
        TIMSK1 |= B00000001;  // Enable Timer Overflow Interrupt
      }
    }
  } 
  return (0);
}
void loop(){};
