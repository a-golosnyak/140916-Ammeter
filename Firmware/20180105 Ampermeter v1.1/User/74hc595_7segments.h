/**
  ******************************************************************************
  * @file    ad7799.h
  * @author  
  * @version 
  * @date    
  * @brief   
  ******************************************************************************
  * @attention

  ******************************************************************************
  */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __AD7799_H
#define __AD7799_H

/* Includes ------------------------------------------------------------------*/

#include "main.h"

/* Private define ------------------------------------------------------------*/
/* Private macro -------------------------------------------------------------*/
/* Private typedef -----------------------------------------------------------*/

typedef struct
{
	u16	Digit[6];
}
HC595_t;

/* Private variables ---------------------------------------------------------*/
/* Private function prototypes -----------------------------------------------*/
void HC595_Init(void);
void HC595_Processing(void);
void HC595_PeriodicHandle(void);

void HC595_PrintTop(u16 Val);
void HC595_PrintBot(u16 Val);


#endif /*__AD7799_H */



/******************END OF FILE*************************************************/
