#include"uart.h"
unsigned char string_buffer[100]="Learn-in-depth:<Boutros>";
void main(void)
{
UART_Send_string(string_buffer);
}