/**
******************************************************************************
* @file     bsp.c
* @author   Su DaoZhen
* @version  V1.0.0 
* @date     2019/10/26
* @brief    总板级驱动初始化
******************************************************************************
* @attention
* 
* (C)COPYRIGHT Su DaoZhen
******************************************************************************
*/

#include "bsp.h"
#include "./led/bsp_led.h"

/*********************************************
* @brief  板级驱动初始化
* @param  None
* @retval None
**********************************************/
void Bsp_Init(void)
{
	LED_GPIO_Config();
}
/*******************(C) COPYRIGHT Su DaoZhen *********END OF FILE*********/
