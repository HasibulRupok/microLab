#include <mega32.h>
#include <delay.h>
// Alphanumeric LCD Module functions
#include <alcd.h>

// Declare your global variables here

void main(void)
{
// Declare your local variables here
int i = 0;


// Alphanumeric LCD initialization
// Connections specified in the
// Project|Configure|C Compiler|Libraries|Alphanumeric LCD menu:
// RS - PORTA Bit 0
// RD - PORTA Bit 1
// EN - PORTA Bit 2
// D4 - PORTA Bit 4
// D5 - PORTA Bit 5
// D6 - PORTA Bit 6
// D7 - PORTA Bit 7
// Characters/line: 8
lcd_init(16);

    while (1){
        // Place your code here 
        lcd_clear();
        
        lcd_gotoxy(0,0);
        lcd_puts("New Market");
        delay_ms(500);
        
        for(i=1; i<7; i++){
            lcd_clear();
            
            lcd_gotoxy(i,0);
            lcd_puts("New Market");
            delay_ms(500);
        }
        
        for(i=6; i>-1; i--){
            lcd_clear();
            
            lcd_gotoxy(i,0);
            lcd_puts("New Market");
            delay_ms(500);
        }
      

    }
}
