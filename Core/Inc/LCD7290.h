/*
 * LCD7290.h
 *
 *  Created on: Nov 6, 2020
 *      Author: Maciek
 */

#ifndef LCD7290_H_
#define LCD7290_H_

/*******************************************************
 * The  CS line for LCD -> PB1
 *     RST line for LCD -> PB2
 *
 *    LCD_CS_Pin GPIO_PIN_1
 *    LCD_CS_GPIO_Port GPIOB
 *    LCD_RST_Pin GPIO_PIN_2
 *    LCD_RST_GPIO_Port GPIOB
 *
 *
 *
 *********************************************************/

class LCD_7290 {
protected:
	void init(); //Init the serial if not connected, set the transmission to serial
public:
	LCD_7290();
	virtual ~LCD_7290();
	void reset();
	void sendCmd(uint8_t *cmd);
	void sendData(const uint8_t * data, int size);
};

#endif /* LCD7290_H_ */
