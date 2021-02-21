/*
 * it.c
 *
 *  Created on: 23/01/2021
 *      Author: PC
 */
#include "main.h"
extern TIM_HandleTypeDef htimer3;
extern UART_HandleTypeDef huart2;


void SysTick_Handler(void){

	HAL_IncTick();
	HAL_SYSTICK_IRQHandler();

}

void TIM3_IRQHandler(){

	HAL_TIM_IRQHandler(&htimer3);
}

void USART2_IRQHandler(void)
{
	HAL_UART_IRQHandler(&huart2);
}
