/**
******************************************************************************
* @file     main.c
* @author   Su DaoZhen
* @version  V1.0.0 
* @date     2019/10/26
* @brief    主函数
******************************************************************************
* @attention
* 
* (C)COPYRIGHT Su DaoZhen
******************************************************************************
*/

#include "FreeRTOS.h"
#include "bsp.h"
#include "task.h"
#include "app_task.h"

#define TASK1_STACK_SIZE          128
#define TASK1_PRIORITY            ( 1  )

#define TASK2_STACK_SIZE          128
#define TASK2_PRIORITY            ( 2  )

#define TASK3_STACK_SIZE          128
#define TASK3_PRIORITY            ( 3  )

/*********************************************
* @brief  系统初始化
* @param  None
* @retval None
**********************************************/
void SysInit(void)
{
  NVIC_PriorityGroupConfig(NVIC_PriorityGroup_4);
  Bsp_Init();
}

/*********************************************
* @brief  创建任务
* @param  None
* @retval None
**********************************************/
void AppTaskCreate(void)
{
  xTaskCreate(vAppTask1, "Task1", TASK1_STACK_SIZE, NULL, TASK1_PRIORITY, NULL);
  xTaskCreate(vAppTask2, "Task2", TASK2_STACK_SIZE, NULL, TASK2_PRIORITY, NULL);
  xTaskCreate(vAppTask3, "Task3", TASK3_STACK_SIZE, NULL, TASK3_PRIORITY, NULL);
}

/*********************************************
* @brief  主函数
* @param  None	
* @retval 0
**********************************************/
int main(void)
{
	SysInit();
	AppTaskCreate();
	
	vTaskStartScheduler();
	
	return 0;
}
/*******************(C) COPYRIGHT Su DaoZhen *********END OF FILE*********/
