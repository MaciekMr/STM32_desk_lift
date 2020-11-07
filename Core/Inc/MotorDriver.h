/*
 * MotorDriver.h
 *
 *  Created on: Nov 6, 2020
 *      Author: Maciek
 */

#ifndef MOTORDRIVER_H_
#define MOTORDRIVER_H_


/********************************************************
 * Controll the driver TI DRV8873
 *
 * Send commands via SPI
 * Read command via SPI
 *
 *********************************************************/
class MotorDriver {
public:
	MotorDriver();
	virtual ~MotorDriver();
};

#endif /* MOTORDRIVER_H_ */
