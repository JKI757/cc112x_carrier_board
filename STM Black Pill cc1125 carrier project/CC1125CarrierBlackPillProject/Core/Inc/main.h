/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2022 STMicroelectronics.
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
#include "stm32f4xx_hal.h"

#include "stm32f4xx_ll_system.h"
#include "stm32f4xx_ll_gpio.h"
#include "stm32f4xx_ll_exti.h"
#include "stm32f4xx_ll_bus.h"
#include "stm32f4xx_ll_cortex.h"
#include "stm32f4xx_ll_rcc.h"
#include "stm32f4xx_ll_utils.h"
#include "stm32f4xx_ll_pwr.h"
#include "stm32f4xx_ll_dma.h"

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
#define BoardLED_Pin LL_GPIO_PIN_13
#define BoardLED_GPIO_Port GPIOC
#define BOARD_KEY_SWITCH_Pin LL_GPIO_PIN_0
#define BOARD_KEY_SWITCH_GPIO_Port GPIOA
#define TI_GPIO_3_Pin LL_GPIO_PIN_1
#define TI_GPIO_3_GPIO_Port GPIOA
#define TI_GPIO_3_EXTI_IRQn EXTI1_IRQn
#define TI_GPIO_0_Pin LL_GPIO_PIN_2
#define TI_GPIO_0_GPIO_Port GPIOA
#define TI_GPIO_0_EXTI_IRQn EXTI2_IRQn
#define TI_RESET_Pin LL_GPIO_PIN_3
#define TI_RESET_GPIO_Port GPIOA
#define GPIO_OUT_3_Pin LL_GPIO_PIN_0
#define GPIO_OUT_3_GPIO_Port GPIOB
#define GPIO_OUT_2_Pin LL_GPIO_PIN_1
#define GPIO_OUT_2_GPIO_Port GPIOB
#define GPIO_OUT_1_Pin LL_GPIO_PIN_15
#define GPIO_OUT_1_GPIO_Port GPIOB
#define TI_GPIO_2_Pin LL_GPIO_PIN_4
#define TI_GPIO_2_GPIO_Port GPIOB
/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
