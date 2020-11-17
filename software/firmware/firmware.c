#include "stdlib.h"
#include "system.h"
#include "periphs.h"
#include "iob-uart.h"
#include "time.h"

int main()
{
	srand(time(0));
 
  
	signed int x = 0;
	unsigned int  y = 0, y_1 = 0, i = 0, max = 2000, min = 0 ;


//init uart 
	uart_init(UART_BASE,FREQ/BAUD);   


  	for(i = 0; i < 100; i++){

  		x = ((rand() % (max + min + 1)) + min) - 1000;

  		if(x < 0){

  			x = x * -1;
  		}
  		y = y_1 + x;

  		uart_printf("%d: %d \n", i, y);
  		y_1 = y;

  	}
}
