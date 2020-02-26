#include <90s8535.h>

interrupt [EXT_INT0] void ext_int0_isr(void)
{
    PORTA=PORTA ^ 0x01;
}

void main(void)
{

 PORTB=0x01;
 DDRB=0x01; 
 DDRA=0x01; 
 
 GIMSK=0x40;
 MCUCR=0x02;
 #asm("sei");  

 while (1)
      {
      };
}
