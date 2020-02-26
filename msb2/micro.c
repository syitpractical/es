/*******************************************************


Project : 

Date    : 2/14/2020
Author  : 
Company : 
Comments: 


Chip type               : AT90S8535
AVR Core Clock frequency: 1.000000 MHz
Memory model            : Small
External RAM size       : 0
Data Stack size         : 128
*******************************************************/

#include <90s8535.h>
#include<delay.h>
unsigned int chout=0x00;


// Declare your global variables here

void main(void)
{
PORTA=0x00;
DDRA=0xFF;
UBRR=0x33;
 UCR=0x58;


while (1)
      {
      UDR=chout;
      chout++;
      if(chout==0xff)
      {chout=0x00;}
      delay_ms(100);

      }
}
