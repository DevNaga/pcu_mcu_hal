/******************************************************************
FileName   :mx25L6406e.c
Copy Right :
System     :
Module     :
Author     :zhenhua.wang
Create Date:2019-05-31
****************************************************************/

#ifndef USER_DRIVER_MX25L6406E_H_
#define USER_DRIVER_MX25L6406E_H_

#define     WEL         0x02
#define     WIP         0x01
#define     PAGESIZE    0x100
#define     SECTORSIZE  0x1000
#define     BLOCKSIZE   0x10000
#define     CHIPSIZE    0x100000
#define     NORBUFSIZE  256

#define     SST25VF080B 0xBF258E
#define     SST25VF080B_ID  0xBF8E

#define     WREN        0x0006
#define     WRDI        0x0004
#define     RDSR        0x0005
#define     WRSR        0x0001

/******************************************************
*Name    :  FreeRTOS_NorInit
*Function:  Nor Flash  ��ʼ������
*Params  :
*Return  :  1 = init success   0 = init fail
*******************************************************/
uint8    FreeRTOS_NorInit(void);

/******************************************************
*Name    :  NorReadID
*Function:  read  id
*Params  :
*Return  :  DEVICE ID
*******************************************************/
uint32    NorReadID(void);

/******************************************************
*Name    :  NorReadID
*Function:  read  id
*Params  :
*Return  :  ״ֵ̬
*******************************************************/
uint32    NorReadMID(void);

/******************************************************
*Name    : NorReadByte
*Function: nor flash ���ֽں�������addr��ַ��һ���ֽ����ݣ�
*Params  :
*Return  : �ֽ�����
*******************************************************/
uint8   NorReadByte(uint32 addr);

/******************************************************
*Name    : NorFastRead
*Function: nor flash ���ֽں�������addr��ַ��size�ֽ�����,�ŵ� buf�У�
*Params  : addr : flash ��ַ
*Params  : buf  : ���ݻ�����
*Params  : size : Ҫ��ȡ���ݵĴ�С
*Return  :
*******************************************************/
uint8   NorFastRead(uint32 addr,uint16 *buf, uint16 size);

/******************************************************
*Name    : NorSectorErase
*Function: nor flash ������������
*Params  : sector : flash ������
*Return  : ����״̬    0---ʧ��    1---�ɹ�
*******************************************************/
uint8   NorSectorErase(uint16 sector);

/******************************************************
*Name    : NorBlockErase
*Function: nor flash ���������
*Params  : block : flash ���
*Return  : ����״̬    0---ʧ��    1---�ɹ�
*******************************************************/
uint8   NorBlockErase(uint8 block);

/******************************************************
*Name    : NorChipErase
*Function: nor flash ��������
*Params  : block : flash ���
*Return  : ����״̬    0---ʧ��    1---�ɹ�
*******************************************************/
uint8   NorChipErase(void);

/******************************************************
*Name    : NorChipErase
*Function: nor flash ��������
*Params  : block : flash ���
*Return  : ����״̬    0---ʧ��    1---�ɹ�
*******************************************************/
uint8   NorPageWrite(uint16 page, uint16 *buf);

/******************************************************
*Name    : NorWriteAuto
*Function: nor flash ����д���ݺ���
*Params  : addr : flash ��ַ
*Params  : buf  ���ݻ�����
*Params  : len ���ݳ���
*Return  : ����״̬    0---ʧ��    1---�ɹ�
*******************************************************/
uint8   NorWriteAuto(uint32 addr, uint16 *buf,uint16 len);

/******************************************************
*Name    : NorWriteByte
*Function: nor flash д�ֽں���
*Params  : addr : ��ַ
*Return  : ����״̬    0---ʧ��    1---�ɹ�
*******************************************************/
uint8   NorWriteByte(uint32 addr, uint16 data);

void    NorTest(void);

#endif /* USER_DRIVER_MX25L6406E_H_ */
