#include <90s8535.h>
#include<delay.h>

void main(void)
{

    PORTA=0x00;
    DDRA=0xff;  
    
PORTD=0x00;
    DDRD=0xff;  

    PORTB=0x00;
    DDRB=0x00;

while (1)
      {
                PORTD = 0xff;
                PORTA=PINB;       
      };
}
