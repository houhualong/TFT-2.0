#include<reg52.h>
#include "gui.h"

void main()
{
	TFT_Init();
	TFT_ClearScreen(BLACK);	  //刷黑色
	while(1)
	{	
		GUI_Write32CnChar(20, 24, "普中科技", RED, BLACK); //
		GUI_Line(20, 54, 140, 54, RED);
		GUI_WriteASCII(10, 60, "2013", RED, BLACK);
		GUI_Write32CnChar(74, 60, "年", RED, BLACK);
		GUI_WriteASCII(103, 60, "12", RED, BLACK);
		GUI_Write32CnChar(130, 60, "月", RED, BLACK);
		GUI_WriteASCII(10, 100, "31", RED, BLACK);
		GUI_Write32CnChar(40, 100, "日", RED, BLACK);
		GUI_WriteASCII(10, 140, "12-00-00", RED, BLACK);
		GUI_Write32CnChar(74, 100, "星期", RED, BLACK);
		GUI_WriteASCII(138, 100, "2", RED, BLACK);
		while(1);	
	}	
}