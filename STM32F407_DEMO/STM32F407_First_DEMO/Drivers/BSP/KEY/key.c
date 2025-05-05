/*
 * key.c
 *
 *  Created on: Apr 26, 2025
 *      Author: keqin.wang
 */

#include"key.h"
/**
 * @brief       鎸夐敭鎵弿鍑芥暟
 * @note        璇ュ嚱鏁版湁鍝嶅簲浼樺厛绾�(鍚屾椂鎸変笅澶氫釜鎸夐敭): WK_UP > KEY1 > KEY0!!
 * @param       mode:0 / 1, 鍏蜂綋鍚箟濡備笅:
 *   @arg       0,  涓嶆敮鎸佽繛缁寜(褰撴寜閿寜涓嬩笉鏀炬椂, 鍙湁绗竴娆¤皟鐢ㄤ細杩斿洖閿��,
 *                  蹇呴』鏉惧紑浠ュ悗, 鍐嶆鎸変笅鎵嶄細杩斿洖鍏朵粬閿��)
 *   @arg       1,  鏀寔杩炵画鎸�(褰撴寜閿寜涓嬩笉鏀炬椂, 姣忔璋冪敤璇ュ嚱鏁伴兘浼氳繑鍥為敭鍊�)
 * @retval      閿��, 瀹氫箟濡備笅:
 *              KEY0_PRES, 1, KEY0鎸変笅
 *              KEY1_PRES, 2, KEY1鎸変笅
 *              KEY2_PRES, 3, KEY2鎸変笅
 */
uint8_t key_scan(uint8_t mode)
{
    static uint8_t key_up = 1;  /* 鎸夐敭鎸夋澗寮�鏍囧織 */
    uint8_t keyval = 0;

    if (mode) key_up = 1;       /* 鏀寔杩炴寜 */

    if (key_up && (KEY0 == 0 || KEY1 == 0 || KEY2 == 0))  /* 鎸夐敭鏉惧紑鏍囧織涓�1, 涓旀湁浠绘剰涓�涓寜閿寜涓嬩簡 */
    {
        HAL_Delay(10);       	/* 鍘绘姈鍔� */
        key_up = 0;

        if (KEY0 == 0)  keyval = KEY0_PRES;

        if (KEY1 == 0)  keyval = KEY1_PRES;

        if (KEY2 == 0) keyval = KEY2_PRES;
    }
    else if (KEY0 == 1 && KEY1 == 1 && KEY2 == 1) /* 娌℃湁浠讳綍鎸夐敭鎸変笅, 鏍囪鎸夐敭鏉惧紑 */
    {
        key_up = 1;
    }

    return keyval;              /* 杩斿洖閿�� */
}
