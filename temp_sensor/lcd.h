

#define EN PB2                         // enable 
#define RW PB1                       // read/write 
#define RS PB0                     // register select 
#define Bit8_mode    (0X07 << 3)   // 0X38
#define CLEAR_LCD	 (0X01 << 0)   // 0X01
#define SET_CURSOR   (0X07 << 1)  // 0X0E
#define LINE_1        (0X01 << 7) // 0X80
#define LINE_2 		(0X03 << 6)   // 0X03



void init_LCD(void)
{
	LCD_cmd(Bit8_mode);                            // initialization of 8bit mode
	_delay_ms(50);
	
	LCD_cmd(CLEAR_LCD);                                 // clear LCD
	_delay_ms(50);
	
	LCD_cmd(SET_CURSOR);                        // Setting cursor ON
	_delay_ms(50);
	
	LCD_cmd(LINE_1);                     // —8 go to first line and –0 is for 0th position
	_delay_ms(50);

}
