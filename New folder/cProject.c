#include <90s8535.h>    
#include <delay.h>
int count1, count2 ;
void main(void)
{
PORTA=0x01;
DDRA=0xFF;
PORTB=0x01;
DDRB=0xFF;
count1 = 0 ; 
count2 = 0 ;
           while (1)
 {
          delay_ms(200) ;
          PORTA = PORTA + PORTA ;       
          count1++ ;
          if(count1 == 7)   
          {
                   count1 = 0 ; 
                 delay_ms(200) ;
                 PORTA = 0x01 ;
          }
          delay_ms(200) ;
         PORTB = PORTB + PORTB ;       
          count2++ ;
          if(count2 == 7)   
          {
                   count2 = 0 ; 
                 delay_ms(200) ;
                PORTB = 0x01 ;
          }
      }
}
