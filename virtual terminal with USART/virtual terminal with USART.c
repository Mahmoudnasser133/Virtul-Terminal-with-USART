/*
 * virtual_terminal_with_USART.c
 *
 * Created: 10/11/2022 2:57:02 PM
 *  Author: Nasser
 */ 


#include "USART.h"
#include "LCD.h"
int main(void)
{
	UART_vInit(9600);
	LCD_vInit();
	char x;
    while(1)
    {
        x=UART_u8ReceiveData();
		LCD_vSend_char(x);
    }
}

