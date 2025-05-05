/*
 * key.h
 *
 *  Created on: Dec 14, 2023
 *      Author: login
 */

#ifndef BSP_KEY_KEY_H_
#define BSP_KEY_KEY_H_

#include"main.h"
#define KEY 3
#define KEY0    HAL_GPIO_ReadPin(KEY0_GPIO_Port, KEY0_Pin) /*读取KEY0引脚*/
#define KEY1    HAL_GPIO_ReadPin(KEY1_GPIO_Port, KEY1_Pin) /*读取KEY1引脚*/
#define KEY2    HAL_GPIO_ReadPin(KEY2_GPIO_Port, KEY2_Pin) /*读取KEY2引脚*/

#define KEY0_PRES   1     /*KEY0按下*/
#define KEY1_PRES   2     /*KEY1按下*/
#define KEY2_PRES   3     /*KEY2按下*/
//void key_init(void) ; /*按键初始化函数*/
uint8_t key_scan(uint8_t mode);
#endif /* BSP_KEY_KEY_H_ */
