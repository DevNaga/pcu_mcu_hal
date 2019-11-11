/******************************************************************
FileName   :IIC_driver.h
Copy Right :
System     :
Module     :
Author     :zhenhua.wang
Create Date:2019-04-30
****************************************************************/

#ifndef USER_DRIVER_IIC_DRIVER_H_
#define USER_DRIVER_IIC_DRIVER_H_

#include "HL_reg_i2c.h"

typedef struct  _Rtc_Timer {
    uint8   ryear;
    uint8   rmouth;
    uint8   rday;
    uint8   rhour;
    uint8   rminute;
    uint8   rsecond;
}Rtc_Timer;

/******************************************************
*Name    :  I2CInit
*Function:  ����i2c�Ĵ���
*Params  :  I2C :  IIC���߻���ַ ,������Ϊ i2cREG1�� i2cREG2;
*Params  :  speed : �����ٶȣ�kHz)��������Ϊ 100��200��400
*Return  :  void
*******************************************************/
void I2CInit(i2cBASE_t *I2C, uint16 speed);

/******************************************************************
*Name    :  FreeRTOS_I2CInit
*Function:  IIC ���߳�ʼ��
*Params  :  void
*Return  :  void
******************************************************************/
void FreeRTOS_I2CInit(void);

/******************************************************
*Name    :  I2cWrite
*Function:  i2cд���ܺ���
*Params  :  id��uint8��:�豸id
*Params  :  reg_addr(uint16):�Ĵ�����ַ
*Params  :  data��uint8��:����
*Return  :  ERR��ʧ��         NOERR���ɹ�
*******************************************************/
uint8 I2cWrite(i2cBASE_t *I2C,uint8 id,uint16 reg_addr,uint8 data);

/******************************************************
*Name    :  I2cRead
*Function:  i2c�����ܺ���
*Params  :  id��uint8��:�豸id
*Params  :  reg_addr(uint16):�Ĵ�����ַ
*Return  :  data����ȡ����          ERR��ʧ��
*******************************************************/
uint8  I2cRead(i2cBASE_t *I2C,uint8 id,uint16 reg_addr);

/******************************************************
*Name    :  I2cWriteData
*Function:  i2c ������ݺ���
*Params  :  id��uint8��:�豸id
*Params  :  RamAddr  д���ݻ�����
*Params  :  RomAddress ���ĸ���ַ��ʼд��
*Params  :  number  ��ȡ���ݵĸ���
*Params  :  reg_addr(uint16):�Ĵ�����ַ
*Return  :  data����ȡ����          ERR��ʧ��
*******************************************************/
uint8 I2cWriteData(i2cBASE_t *I2C,uint8 id,uint8  *RamAddr, uint8    RomAddress, uint8 count);

/******************************************************
*Name    :  I2cReadData
*Function:  i2c ������ݺ���
*Params  :  id��uint8��:�豸id
*Params  :  RamAddr  ���������ݴ��ַ
*Params  :  RomAddress ���ĸ���ַ��ʼ��
*Params  :  number  ��ȡ���ݵĸ���
*Params  :  reg_addr(uint16):�Ĵ�����ַ
*Return  :  data����ȡ����          ERR��ʧ��
*******************************************************/
uint8 I2cReadData(i2cBASE_t *I2C,uint8 id,uint8  *RamAddr, uint8    RomAddress, uint8 count);

/******************************************************
*Name    :  RtcInit
*Function:  RTC��ʼ������
*Params  :
*Return  :
*******************************************************/
void    RtcInit(void);

/******************************************************
*Name    :  RtcGetValue
*Function:  RTC ��ȡʱ�亯��
*Params  :
*Return  :
*******************************************************/
Rtc_Timer   RtcGetValue(void);

#endif /* USER_DRIVER_IIC_DRIVER_H_ */
