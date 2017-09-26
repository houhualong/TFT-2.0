#include<reg52.h>
#include "lcd_driver.h"


void main()
{
	TFT_Init();
	while(1)
	{
		TFT_ClearScreen(BLACK);	  //Ë¢ºÚÉ«
		TFT_ClearScreen(BLUE);
		TFT_ClearScreen(RED);
		TFT_ClearScreen(MAGENTA);
		TFT_ClearScreen(GREEN);
		TFT_ClearScreen(CYAN);
		TFT_ClearScreen(YELLOW);
		TFT_ClearScreen(WHITE);	
	}	
}