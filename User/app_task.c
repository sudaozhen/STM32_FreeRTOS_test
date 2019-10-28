/**
******************************************************************************
* @file     app_task.c
* @author   Su DaoZhen
* @version  V1.0.0 
* @date     2019/10/26
* @brief    Ӧ�ó���Դ�ļ�
******************************************************************************
* @attention
* 
* (C)COPYRIGHT Su DaoZhen
******************************************************************************
*/

#include "app_task.h"
#include "FreeRTOS.h"
#include "task.h"
#include "bsp.h"
#include "queue.h"

/*********************************************
* @brief  ����1��LED1��˸
* @param  pvParameters
* @retval None
**********************************************/
void vAppTask1(void *pvParameters)
{
	while(1)
	{
		LED1_TOGGLE;
		vTaskDelay(50);
	}
}

/*********************************************
* @brief  ����2��LED2��˸
* @param  pvParameters
* @retval None
**********************************************/
void vAppTask2(void *pvParameters)
{
	while(1)
	{
		LED2_TOGGLE;
		vTaskDelay(100);
	}
}

/*********************************************
* @brief  ����3��LED3��˸
* @param  pvParameters
* @retval None
**********************************************/
void vAppTask3(void *pvParameters)
{
	while(1)
	{
		LED3_TOGGLE;
		vTaskDelay(2000 / portTICK_RATE_MS);
	}
}
/*******************(C) COPYRIGHT Su DaoZhen *********END OF FILE*********/
