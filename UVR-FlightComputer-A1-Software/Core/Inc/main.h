/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2024 STMicroelectronics.
  * All rights reserved.
  *
  * This software is licensed under terms that can be found in the LICENSE file
  * in the root directory of this software component.
  * If no LICENSE file comes with this software, it is provided AS-IS.
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
#include "stm32l4xx_hal.h"

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
#define LED0_Pin GPIO_PIN_0
#define LED0_GPIO_Port GPIOC
#define LED1_Pin GPIO_PIN_1
#define LED1_GPIO_Port GPIOC
#define LED2_Pin GPIO_PIN_2
#define LED2_GPIO_Port GPIOC
#define LED3_Pin GPIO_PIN_3
#define LED3_GPIO_Port GPIOC
#define STG0_Pin GPIO_PIN_0
#define STG0_GPIO_Port GPIOA
#define STG1_Pin GPIO_PIN_1
#define STG1_GPIO_Port GPIOA
#define STG2_Pin GPIO_PIN_2
#define STG2_GPIO_Port GPIOA
#define STG3_Pin GPIO_PIN_3
#define STG3_GPIO_Port GPIOA
#define Actuator1_Pin GPIO_PIN_4
#define Actuator1_GPIO_Port GPIOA
#define Actuator2_Pin GPIO_PIN_5
#define Actuator2_GPIO_Port GPIOA
#define PayloadTemp_Pin GPIO_PIN_2
#define PayloadTemp_GPIO_Port GPIOB
#define GoPro_ON_Pin GPIO_PIN_12
#define GoPro_ON_GPIO_Port GPIOB
#define ADX_INT2_Pin GPIO_PIN_6
#define ADX_INT2_GPIO_Port GPIOC
#define ADX_INT1_Pin GPIO_PIN_7
#define ADX_INT1_GPIO_Port GPIOC
#define LSM_INT2_Pin GPIO_PIN_8
#define LSM_INT2_GPIO_Port GPIOC
#define LSM_INT1_Pin GPIO_PIN_9
#define LSM_INT1_GPIO_Port GPIOC
#define BME_CS_Pin GPIO_PIN_8
#define BME_CS_GPIO_Port GPIOA
#define BME_INT_Pin GPIO_PIN_9
#define BME_INT_GPIO_Port GPIOA
#define JTAG_CONN_Pin GPIO_PIN_5
#define JTAG_CONN_GPIO_Port GPIOB

/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
