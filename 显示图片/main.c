#include<reg52.h>
#include "gui.h"

void main()
{
	TFT_Init();
	TFT_ClearScreen(BLACK);   //ºÚ
	while(1)
	{
		GUI_Write32CnChar(20, 24, "ÆÕÖÐ¿Æ¼¼", RED, BLACK);
		GUI_Line(20, 54, 140, 54, RED);
		GUI_ShowPicture(30,60 , 90, 150);
	}
}