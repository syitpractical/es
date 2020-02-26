#include <90s8535.h>
#include<delay.h>
unsigned int chout = 0x00;
void main(void)
{
PORTA=0x00;
DDRA=0xFF; 
UBRR=0x33;
UCR=0x58; 
while (1)
      {
               UDR = chout;
              chout++;
              if(chout==0xff)
                  chout=0x00;     
           delay_ms(100);           
            };
}
