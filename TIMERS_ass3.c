/*
 * TIMERS_ass3.c
 *
 *  Created on: Jan 27, 2024
 *      Author: Abir Omara
 */


/* Lib layer */
#include "STD_TYPES.h"
#include "BIT_MATH.h"
#include <util/delay.h>
#define F_CPU   8000000UL

/* MCAL */
#include "DIO_interface.h"
#include "TIMERS_interface.h"

/* HAL */
#include "KPD_interface.h"
#include "LCD_interface.h"

int main (void)
{
	u8 Local_u8Key;
	DIO_voidInit();
	LCD_voidInit();
	//TIMERS_voidTimer0Init();
	TIMERS_voidTimer1Init();

	LCD_u8GoToXY(1,0);
	LCD_voidWriteString("Let's play piano");
	//TIMERS_voidTimer1SetCompareMatchValue(0);

	while (1)
	{
		KPD_u8GetKeyState(&Local_u8Key);
		//if there are no switch pressed
		//no displaying on LCD
		if (Local_u8Key != KPD_u8_KEY_NOT_PRESSED)
		{

			switch (Local_u8Key)
			{
			case '7':
				//TIMERS_voidTimer0SetCompareMatchValue(16);
				TIMERS_voidTimer1SetCompareMatchValueA(4095);
				LCD_u8GoToXY(2,0);
				LCD_voidWriteString("         ");
				LCD_u8GoToXY(2,0);
				LCD_voidWriteString("Tone 1");
				break;
			case '8':
				//TIMERS_voidTimer0SetCompareMatchValue(16*2);
				TIMERS_voidTimer1SetCompareMatchValueA(4095*2);
				LCD_u8GoToXY(2,0);
				LCD_voidWriteString("         ");
				LCD_u8GoToXY(2,0);
				LCD_voidWriteString("Tone 2");
				break;
			case '9':
				//TIMERS_voidTimer0SetCompareMatchValue(16*3);
				TIMERS_voidTimer1SetCompareMatchValueA(4095*3);

				LCD_u8GoToXY(2,0);
				LCD_voidWriteString("         ");
				LCD_u8GoToXY(2,0);
				LCD_voidWriteString("Tone 3");
				break;
			case '/':
				//TIMERS_voidTimer0SetCompareMatchValue(16*4);
				TIMERS_voidTimer1SetCompareMatchValueA(4095*4);

				LCD_u8GoToXY(2,0);
				LCD_voidWriteString("         ");
				LCD_u8GoToXY(2,0);
				LCD_voidWriteString("Tone 4");
				break;
			case '4':
				//TIMERS_voidTimer0SetCompareMatchValue(16*5);
				TIMERS_voidTimer1SetCompareMatchValueA(4095*5);

				LCD_u8GoToXY(2,0);
				LCD_voidWriteString("         ");
				LCD_u8GoToXY(2,0);
				LCD_voidWriteString("Tone 5");
				break;
			case '5':
				//TIMERS_voidTimer0SetCompareMatchValue(16*6);
				TIMERS_voidTimer1SetCompareMatchValueA(4095*6);

				LCD_u8GoToXY(2,0);
				LCD_voidWriteString("         ");
				LCD_u8GoToXY(2,0);
				LCD_voidWriteString("Tone 6");
				break;
			case '6':
				//TIMERS_voidTimer0SetCompareMatchValue(16*7);
				TIMERS_voidTimer1SetCompareMatchValueA(4095*7);

				LCD_u8GoToXY(2,0);
				LCD_voidWriteString("         ");
				LCD_u8GoToXY(2,0);
				LCD_voidWriteString("Tone 7");
				break;
			case '*':
				//TIMERS_voidTimer0SetCompareMatchValue(16*8);
				TIMERS_voidTimer1SetCompareMatchValueA(4095*8);

				LCD_u8GoToXY(2,0);
				LCD_voidWriteString("         ");
				LCD_u8GoToXY(2,0);
				LCD_voidWriteString("Tone 8");
				break;
			case '1':
				//TIMERS_voidTimer0SetCompareMatchValue(16*9);
				TIMERS_voidTimer1SetCompareMatchValueA(4095*9);

				LCD_u8GoToXY(2,0);
				LCD_voidWriteString("         ");
				LCD_u8GoToXY(2,0);
				LCD_voidWriteString("Tone 9");
				break;
			case '2':
				//TIMERS_voidTimer0SetCompareMatchValue(16*10);
				TIMERS_voidTimer1SetCompareMatchValueA(4095*10);

				LCD_u8GoToXY(2,0);
				LCD_voidWriteString("         ");
				LCD_u8GoToXY(2,0);
				LCD_voidWriteString("Tone 10");
				break;
			case '3':
				//TIMERS_voidTimer0SetCompareMatchValue(16*11);
				TIMERS_voidTimer1SetCompareMatchValueA(4095*11);

				LCD_u8GoToXY(2,0);
				LCD_voidWriteString("         ");
				LCD_u8GoToXY(2,0);
				LCD_voidWriteString("Tone 11");
				break;
			case '-':
				//TIMERS_voidTimer0SetCompareMatchValue(16*12);
				TIMERS_voidTimer1SetCompareMatchValueA(4095*12);

				LCD_u8GoToXY(2,0);
				LCD_voidWriteString("         ");
				LCD_u8GoToXY(2,0);
				LCD_voidWriteString("Tone 12");
				break;
			case '%':
				//TIMERS_voidTimer0SetCompareMatchValue(16*13);
				TIMERS_voidTimer1SetCompareMatchValueA(4095*13);

				LCD_u8GoToXY(2,0);
				LCD_voidWriteString("         ");
				LCD_u8GoToXY(2,0);
				LCD_voidWriteString("Tone 13");
				break;
			case '0':
				//TIMERS_voidTimer0SetCompareMatchValue(16*14);
				TIMERS_voidTimer1SetCompareMatchValueA(4095*14);

				LCD_u8GoToXY(2,0);
				LCD_voidWriteString("         ");
				LCD_u8GoToXY(2,0);
				LCD_voidWriteString("Tone 14");
				break;
			case '=':
				//TIMERS_voidTimer0SetCompareMatchValue(16*15);
				TIMERS_voidTimer1SetCompareMatchValueA(4095*15);

				LCD_u8GoToXY(2,0);
				LCD_voidWriteString("         ");
				LCD_u8GoToXY(2,0);
				LCD_voidWriteString("Tone 15");
				break;
			case '+':
				//TIMERS_voidTimer0SetCompareMatchValue(255);
				TIMERS_voidTimer1SetCompareMatchValueA(65535);

				LCD_u8GoToXY(2,0);
				LCD_voidWriteString("         ");
				LCD_u8GoToXY(2,0);
				LCD_voidWriteString("Tone 16");
				break;
			}
		}
	}
	return 0;
}
