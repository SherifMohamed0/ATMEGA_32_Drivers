/*
 * SSD_Interface.h
 *
 *
 *     Author: Sherif Mohamed
 */

#ifndef HAL_SSD_SSD_INTERFACE_H_
#define HAL_SSD_SSD_INTERFACE_H_

/*============================================================================================*/
/*   INCLUDES   */
/*============================================================================================*/
#include "STD.h"
#include "DIO_Interface.h"
#include <avr/delay.h>

/*============================================================================================*/
/*   PROTOTYPES   */
/*============================================================================================*/
void H_SSD_Void_SSDInit(void);
void H_SSD_Void_SSDDisplay(u32);

#endif /* HAL_SSD_SSD_INTERFACE_H_ */
