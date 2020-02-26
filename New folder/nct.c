#include <90s8535.h>    
#include <delay.h>
void main(void)
{
PORTA=0x80;
DDRA=0x80;
while (1)
      {                 
      
      PORTA=PORTA^0x80;
delay_ms(200);
      
      };
}
