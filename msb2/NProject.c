#include <90s8535.h>

 unsigned int timecount=0;
 interrupt[TIM0_OVF] void timeo_ovf_isr(void)
 {
      TCNT0 = 6;
      if(++timecount==2)
      {
            PORTA=PORTA^0x80;
            timecount=0;
      }  }
void main(void)
{
    DDRA = 0x80;
    TCCR0 = 0x02;
    TCNT0 = 0x00;
    TIMSK = 0x01;
    #asm("sei");
   while (1)
   {
   };   
}
