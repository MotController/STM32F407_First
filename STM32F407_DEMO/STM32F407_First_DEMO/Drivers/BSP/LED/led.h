/*
 * led.h
 *
 *  Created on: Apr 26, 2025
 *      Author: keqin.wang
 */

#ifndef LED_LED_H_
#define LED_LED_H_

#include"main.h"
#define LED0(x)   x?   HAL_GPIO_WritePin(GPIOE, LED0_Pin, GPIO_PIN_SET):\
                       HAL_GPIO_WritePin(GPIOE, LED0_Pin, GPIO_PIN_RESET);
#define LED1(x)   x?   HAL_GPIO_WritePin(GPIOE, LED1_Pin, GPIO_PIN_SET):\
                       HAL_GPIO_WritePin(GPIOE, LED1_Pin, GPIO_PIN_RESET);
#endif /* LED_LED_H_ */
