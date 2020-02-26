#include <90s8535.h>
#include<delay.h>
void main(void)
{
PORTA=0x00;
DDRA=0xff;
UCR=0x58;
UBRR=0x33;
while (1)
      {
    PORTA=UDR;
    delay_ms(100);
      };
}