#include <avr/io.h>
#include <util/delay.h>


int main() {
    char seg_code[]={0x3F,0X06,0X5B,0X4F,0X66,0X6D,0X7D,0X07,0X7F,0X6F,0X77,0X7C,0X39,0X5E,0X79,0X71};
    int cnt, num, temp,i;

    /* Configure the ports as output */
    DDRD = 0xff; // Data lines
    //DDRD = 0xff; // Control signal PORTD0-PORTD3

    while (1) 
    {
        for (cnt = 0x00; cnt <= 15; cnt++) // loop to display 0-9999
        {
            for (i = 0; i < 100; i++)
            {            
              
                
                PORTD = seg_code[cnt];
                _delay_ms(1);                              
            }
        }
    }
}
