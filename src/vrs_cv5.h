/*
 * vrs_cv5.h
 *
 *  Created on: 18. 10. 2016
 *      Author: Asus
 */
#ifndef VRS_CV5_H_
#define VRS_CV5_H_

//includes
#include <stddef.h>
#include "stm32l1xx.h"

//definicie globalnych premennych
uint16_t value;
uint16_t rec_data;

// definicie funkcii
void adc_init();
void led_init();
void usart_init();

#endif /* VRS_CV5_H_ */
