void main() {
TRISB=0;
ANSEL=ANSELH=0;

PORTB = 0b00110000;
delay_ms(50);

while(1)
{
PORTB = PORTB<<1;
delay_ms(50);
    if(PORTB >= 0b11000000)
    {
       PORTB = 129;   //binary olarak �evirin
       delay_ms(50);
    }

    if(PORTB >= 0b10000001)
    {
       PORTB = 3;   //binary olarak �evirin
       delay_ms(50);

    }

}
}