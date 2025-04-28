/*
 * beep.h
 *
 *  Created on: Apr 26, 2025
 *      Author: keqin.wang
 */

#ifndef BEEP_BEEP_H_
#define BEEP_BEEP_H_
#include"main.h"

#define BEEP(x)   x?   HAL_GPIO_WritePin(BEEP_GPIO_Port, BEEP_Pin, GPIO_PIN_SET):\
                       HAL_GPIO_WritePin(BEEP_GPIO_Port, BEEP_Pin, GPIO_PIN_RESET);
#define BEEP_TOGGLE()   HAL_GPIO_TogglePin(BEEP_GPIO_Port, BEEP_Pin);
#endif /* BEEP_BEEP_H_ */
