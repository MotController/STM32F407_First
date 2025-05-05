/*
 * exti.c
 *
 *  Created on: Apr 28, 2025
 *      Author: keqin.wang
 */
#if 1
#include"exti.h"
#include"led.h"
#include"beep.h"
#include"key.h"
#include"main.h"
void HAL_GPIO_EXTI_Callback(uint16_t GPIO_Pin)
{
//   HAL_Delay(10);
//   switch(GPIO_Pin)
//   {
//     case KEY0_Pin:
//  	 if(KEY0==GPIO_PIN_RESET)
//  	 {
//  		 LED0_TOGGLE();
//  	  	 break;
//  	 }
//
//   case KEY1_Pin:
//  	 if(KEY1==GPIO_PIN_RESET)
//  	 {
//  		 LED1_TOGGLE();
//  	  	 break;
//  	 }
//
//   case KEY2_Pin:
//  	 if(KEY2==GPIO_PIN_RESET)
//  	 {
//  		 LED0_TOGGLE();
//  		 LED1_TOGGLE();
//  	  	 break;
//  	 }
//   }

}
#endif
