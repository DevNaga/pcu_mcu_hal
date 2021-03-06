/******************************************************************
FileName   :Adc.h
Copy Right :
System     :
Module     :
Author     :zhenhua.wang
Create Date:2019-10-14
****************************************************************/

#ifndef USER_DRIVER_ADC_H_
#define USER_DRIVER_ADC_H_

/*******************************************************************************************
*Name    :  Adc1_HwiISR
*Function:  ADC1 Group1 中断处理程序, 当配置的ADC通道完成一次转换时，产生中断
*Params  :  void
*Return  :  void
***********************************************************************************************/
void    Adc1_HwiISR(void);

/*******************************************************************************************
*Name    :  Adc1_StartTask
*Function:  ADC1 Group1 配置ADC通道启动转换任务，每100ms启动一次转换
*Params  :  void
*Return  :  void
***********************************************************************************************/
void    Adc1_StartTask(void);

/*******************************************************************************************
*Name    :  Adc1_DataProcessTask
*Function:  ADC 数据处理任务
*Params  :  void
*Return  :  void
***********************************************************************************************/
void    Adc1_DataProcessTask(void);

/******************************************************************
*Name    :  FreeRTOS_AdcInit
*Function:  创建CAN任务，创建消息队列等等
*Params  :  void
*Return  :  void
*******************************************************************/
void    FreeRTOS_AdcInit(void);

#endif /* USER_DRIVER_ADC_H_ */
