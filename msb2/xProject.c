#include <90s8535.h>

int count = 0 ;

void main(void)
{

PORTA=0xFF;
DDRA=0xFF;
#asm("sei") ;     
             

       while (1)
      {
           if(count == 0)
           {                    
        for(count=0 ; count!=255 ; count++)
        {
                            PORTA = count ;  
          }
           }
           if(count == 255)
           {
                    for(count=255 ; count!=0 ; count--)
                   {
                            PORTA = count ;
                    }
           }
      }; 
}
