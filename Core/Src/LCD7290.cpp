/*
 * LCD7290.cpp
 *
 *  Created on: Nov 6, 2020
 *      Author: Maciek
 */


//https://github.com/rogerclarkmelbourne/Arduino_STM32/blob/master/STM32F1/libraries/Lcd7920_STM/lcd7920_STM.cpp

#include "main.h"
#include "LCD7290.h"
//#include ""

extern SPI_HandleTypeDef hspi1;

LCD_7290::LCD_7290() {
	// TODO Auto-generated constructor stub

}

LCD_7290::~LCD_7290() {
	// TODO Auto-generated destructor stub
}

//Set the CS line to 0;
void LCD_7290::init(){

	HAL_GPIO_WritePin(LCD_CS_GPIO_Port, LCD_CS_Pin, GPIO_PIN_RESET);
}


void LCD_7290::reset(){

	HAL_GPIO_WritePin(LCD_RST_GPIO_Port, LCD_RST_Pin, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(LCD_RST_GPIO_Port, LCD_RST_Pin, GPIO_PIN_SET);
}

//We need to set 1 on the CS line for LCD
//next send command
//next set low on CS line

void LCD_7290::sendCmd(uint8_t * pData){

	HAL_GPIO_WritePin(LCD_CS_GPIO_Port, LCD_CS_Pin, GPIO_PIN_SET);//Now we can send a command, but we need to remeber to disable other CS (maybe semaphore)?
	HAL_SPI_Transmit(&hspi1, pData, 1, HAL_MAX_DELAY);
	HAL_GPIO_WritePin(LCD_CS_GPIO_Port, LCD_CS_Pin, GPIO_PIN_RESET);

}

void LCD_7290::sendData(const uint8_t * pData, int size){

	HAL_GPIO_WritePin(LCD_CS_GPIO_Port, LCD_CS_Pin, GPIO_PIN_SET);//Now we can send a command, but we need to remeber to disable other CS (maybe semaphore)?
	HAL_SPI_Transmit(&hspi1, (uint8_t*)pData, size, HAL_MAX_DELAY);
	HAL_GPIO_WritePin(LCD_CS_GPIO_Port, LCD_CS_Pin, GPIO_PIN_RESET);

}
