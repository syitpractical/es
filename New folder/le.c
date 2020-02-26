#include <90s8535.h>    
#include <delay.h>

// Declare your global variables here

void main(void)
{

PORTA=0xff;
DDRA=0xff;


PORTB=0xff;
DDRB=0xff;


 
while (1)
      {                 
      
      PORTA=PORTA^PORTB;
      PORTB=PORTB^PORTA;

      };
}


