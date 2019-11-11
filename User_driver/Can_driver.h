/******************************************************************
FileName   :Can_driver.h
Copy Right :
System     :
Module     :
Author     :zhenhua.wang
Create Date:2018-12-29
****************************************************************/

#ifndef USER_DRIVER_CAN_DRIVER_H_
#define USER_DRIVER_CAN_DRIVER_H_

#include "HL_hal_stdtypes.h"
#include "HL_reg_can.h"

#define CAN1_Q_NUM    16
#define CAN2_Q_NUM    16
#define CAN3_Q_NUM    16
#define CAN4_Q_NUM    16


#define Ultra_ID1   0xD5
#define Ultra_ID2   0xD4
#define Ultra_ID3   0xD2

#define Can1_low_ch 29
#define Can2_low_ch 42
#define Can3_low_ch 55
#define Can4_low_ch 117

typedef struct _CanMsg{
    uint32 can_id;            //CANID
    uint8  dlc;               //���ݳ��ȣ�0---8����ʾҪ���ͻ�Ҫ���ն��ٸ�����
    uint8  mask;              //IFCTL �ĵ�22λ����������ʹ��λ��=1ʹ����Ӧ�Ľ������Σ� =0û��ʹ�ý������Σ����б�ʶ��λ�����������Ϣ��ƥ��
    uint8  ide;               //��ʶ����չλ,  =1�յ�����Ϣ����չ��ʶ����  =0�յ�����Ϣ��һ����׼��ʶ��
    uint8  data[8];
}canMsg;


uint8       CanSendData(canBASE_t *node, uint32 messageBox, canMsg *msg,uint32_t mask_id);
canMsg      CanReadData(canBASE_t *node);
uint8_t     FreeRTOS_CanInit(void);
void        Can1_RecvTask(void *pvParameters);
void        Can2_RecvTask(void *pvParameters);
void        Can3_RecvTask(void *pvParameters);
void        Can4_RecvTask(void *pvParameters);
void        Can3_SendTask(void *pvParameters);


#endif /* USER_DRIVER_CAN_DRIVER_H_ */
