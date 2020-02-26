#include <90s8535.h>
int count = 9, i ;
int arrValuesHigh[] = {245, 245, 246, 246, 247, 247, 248, 248, 249, 249, 250, 250, 251, 251, 252, 252, 253, 253, 254, 254, 255, 255} ; 
int arrValuesLow[] = {0, 0, 0, 0, 1, 1, 2, 2, 3, 3, 4, 4, 5, 5, 6, 6, 7, 7, 8, 8, 9, 9} ;

void main(void)
{
PORTA=0xFF;
DDRA=0xFF;
      while (1)
      {
                     if(count == 9)
           {               
               for(i=0 ; i<22 ; i++)
               {
                       PORTA = arrValuesLow[i] ;
               }
               for(count=9 ; count!=245 ; count++)
               {
                       PORTA = count ;
               }        
               for(i=0 ; i<22 ; i++)
               {
                       PORTA = arrValuesHigh[i] ;
               }
           }                             
           if(count == 245)                
           {            
               for(i=21 ; i>=0 ; i--)
               {
                       PORTA = arrValuesHigh[i] ;
               }
               for(count=245 ; count!=9 ; count--)
               {
                       PORTA = count ;
               }   
               for(i=21 ; i>=0 ; i--)
               {
                       PORTA = arrValuesLow[i] ;
               }
           }
      };}
