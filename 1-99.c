#include <mega32.h>
#include <delay.h>

// Declare your global variables here
int nums[10] = {0b11111100, 0b01100000, 0b11011010, 0b11110010, 0b01100110, 0b10110110, 0b10111110, 0b11100000, 0b11111110, 0b11100110} ;
int i = 0;
int j = 0;
int k = 0;

void main(void)
{
// Declare your local variables here

    DDRA=0xFF; // Selector

    DDRB=0xFF; // Data   


while (1)
      {
      // Place your code here
         for (k=0;k<10;k++) {  
         
            for (i=0;i<10;i++) {
             
                for (j=0;j<50;j++){
                    PORTA = 0b11111101;
                    PORTB = nums[k];
                    delay_ms(10);
             
                    PORTA = 0b11111110;
                    PORTB = nums[i];
                 
                    delay_ms(10);
                }
            }
         }

         
      }
}
