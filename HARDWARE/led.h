/****************************************Copyright (c)****************************************************
**                                      
**                                 
**
**--------------File Info---------------------------------------------------------------------------------
** File name:             led.H
** Descriptions:          led  hardware driver
**
**--------------------------------------------------------------------------------------------------------
** Created by:              ��Τ��
** Created date:            2020.8.8
** Version:                 	v1.0
** Descriptions:           The original version
**
**--------------------------------------------------------------------------------------------------------
** Modified by:             
** Modified date:           
** Version:                 
** Descriptions:            
**
*********************************************************************************************************/

#ifndef __LED_H
#define __LED_H
#include "sys.h"

//LED�˿ڶ���
#define LED0 PGout(8)	// WORK_LED
#define LED1 PFout(10)	// ������û�ж���ĵƣ��������������ʾ֧�����ֿ��� 

void LED_Init(void);//��ʼ��		 				    
#endif