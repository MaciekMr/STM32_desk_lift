/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; Copyright (c) 2020 STMicroelectronics.
  * All rights reserved.</center></h2>
  *
  * This software component is licensed by ST under BSD 3-Clause license,
  * the "License"; You may not use this file except in compliance with the
  * License. You may obtain a copy of the License at:
  *                        opensource.org/licenses/BSD-3-Clause
  *
  ******************************************************************************
  */
/* USER CODE END Header */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __MAIN_H
#define __MAIN_H

#ifdef __cplusplus
extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "stm32f0xx_hal.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* Exported types ------------------------------------------------------------*/
/* USER CODE BEGIN ET */

/* USER CODE END ET */

/* Exported constants --------------------------------------------------------*/
/* USER CODE BEGIN EC */

/* USER CODE END EC */

/* Exported macro ------------------------------------------------------------*/
/* USER CODE BEGIN EM */

/* USER CODE END EM */

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define U_METER_Pin GPIO_PIN_0
#define U_METER_GPIO_Port GPIOA
#define LCD_RST_Pin GPIO_PIN_4
#define LCD_RST_GPIO_Port GPIOA
#define DRV_CS_Pin GPIO_PIN_0
#define DRV_CS_GPIO_Port GPIOB
#define LCD_CS_Pin GPIO_PIN_1
#define LCD_CS_GPIO_Port GPIOB
#define BUT_IN1_Pin GPIO_PIN_12
#define BUT_IN1_GPIO_Port GPIOB
#define BUT_IN2_Pin GPIO_PIN_13
#define BUT_IN2_GPIO_Port GPIOB
#define BUT_IN3_Pin GPIO_PIN_14
#define BUT_IN3_GPIO_Port GPIOB
#define BUT_IN4_Pin GPIO_PIN_15
#define BUT_IN4_GPIO_Port GPIOB
#define DRV_SLEEP_Pin GPIO_PIN_8
#define DRV_SLEEP_GPIO_Port GPIOA
#define DRV_DISABLE_Pin GPIO_PIN_9
#define DRV_DISABLE_GPIO_Port GPIOA
#define DRV_IN2_Pin GPIO_PIN_10
#define DRV_IN2_GPIO_Port GPIOA
#define DRV_IN1_Pin GPIO_PIN_11
#define DRV_IN1_GPIO_Port GPIOA
#define CHRG_CONTROLL_Pin GPIO_PIN_4
#define CHRG_CONTROLL_GPIO_Port GPIOB
#define RELAY_CTRL_Pin GPIO_PIN_8
#define RELAY_CTRL_GPIO_Port GPIOB
#define ALERT_Pin GPIO_PIN_9
#define ALERT_GPIO_Port GPIOB
/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
