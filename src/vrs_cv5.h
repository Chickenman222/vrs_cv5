/*
 * vrs_cv5.h
 *
 *  Created on: 18. 10. 2016
 *      Author: Asus
 */
#ifndef VRS_CV5_H_
#define VRS_CV5_H_

//includes
#include <string.h>
#include <stdio.h>
#include <stddef.h>
#include "stm32l1xx.h"

//definicie globalnych premennych
uint16_t adc_value;
uint16_t rec_data;
char text[10];
float adc_constant;
uint8_t mode;

// definicie funkcii
void adc_init();
void led_init();
void usart_init();
void USART_send_data(char text[]);
void uloha2_function();

#endif /* VRS_CV5_H_ */
