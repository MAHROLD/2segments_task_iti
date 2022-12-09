/*
 * main.c
 *
 *  Created on: Dec 2, 2022
 *      Author: nadin
 */
#include "STD_Types.h"
#include "BIT_Math.h"
#include <util/delay.h>

#include "DIO.h"
#include "SEV.h"

void main(void)
{
	uint8 Local_u8Counter = 0;
	uint8 Local_u8Counter2 =9;
	uint8 CntLoc=0;
		DIO_voidInit();
		while(1)
		{
			for(CntLoc=0;CntLoc < 25 ; CntLoc++){
			SEV_PowerOff(1);
			 SEV_PowerOn(0);
			SEV_Display(0,Local_u8Counter);
			_delay_ms(20);
			SEV_PowerOff(0);
			SEV_PowerOn(1);
			SEV_Display(1,Local_u8Counter2);
			_delay_ms(20);
			}
			Local_u8Counter++;
			if(Local_u8Counter == 10)
			{
				Local_u8Counter = 0;
			}
			if(Local_u8Counter2 == 0)
			{
				Local_u8Counter2 = 10;
			}
			Local_u8Counter2--;







//
//			SEV_PowerOff(1);
//						SEV_Display(0,Local_u8Counter);
//						      _delay_ms(500);
//						      Local_u8Counter++;
//						      if(Local_u8Counter == 10)
//						      {
//						    	  Local_u8Counter = 0;
//						      }
//						      SEV_PowerOff(0);
//						      SEV_PowerOn(1);
//						      SEV_Display(1,Local_u8Counter2);
//						      _delay_ms(500);
//						      if(Local_u8Counter2 == 0)
//						      {
//						    	  Local_u8Counter2 = 10;
//						      }
//						      Local_u8Counter2--;
//
//						      SEV_PowerOn(0);
//








//			SEV_PowerOff(1);
//			SEV_PowerOn(0);
//			SEV_Display(0, Local_u8Counter);
//			_delay_ms(20);
//			SEV_PowerOff(0);
//			SEV_PowerOn(1);
//			SEV_Display(1, Local_u8Counter2);
//			if(Local_u8Counter2 == 0)
//			{
//				Local_u8Counter2 = 10;
//			 }
//			_delay_ms(20);
//			Local_u8Counter++;
//			Local_u8Counter2--;
//			if(Local_u8Counter == 10)
//			      {
//			    	  Local_u8Counter = 0;
//			      }
//
//			_delay_ms(1000);
		}
}
