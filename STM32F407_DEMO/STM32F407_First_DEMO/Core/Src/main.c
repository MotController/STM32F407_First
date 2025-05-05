/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.c
  * @brief          : Main program body
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2025 STMicroelectronics.
  * All rights reserved.
  *
  * This software is licensed under terms that can be found in the LICENSE file
  * in the root directory of this software component.
  * If no LICENSE file comes with this software, it is provided AS-IS.
  *
  ******************************************************************************
  */
/* USER CODE END Header */
/* Includes ------------------------------------------------------------------*/
#include "main.h"
#include "usart.h"
#include "gpio.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */
//#include"../../BSP/LED/led.h"
//#include"../../BSP/BEEP/beep.h" //??????????’o????·?
#include"led.h"
#include"beep.h"
#include"key.h"
#include"exti.h"
/* USER CODE END Includes */

/* Private typedef -----------------------------------------------------------*/
/* USER CODE BEGIN PTD */

/* USER CODE END PTD */

/* Private define ------------------------------------------------------------*/
/* USER CODE BEGIN PD */

/* USER CODE END PD */

/* Private macro -------------------------------------------------------------*/
/* USER CODE BEGIN PM */

/* USER CODE END PM */

/* Private variables ---------------------------------------------------------*/

/* USER CODE BEGIN PV */

/* USER CODE END PV */

/* Private function prototypes -----------------------------------------------*/
void SystemClock_Config(void);
/* USER CODE BEGIN PFP */

/* USER CODE END PFP */

/* Private user code ---------------------------------------------------------*/
/* USER CODE BEGIN 0 */
#if 0
void HAL_GPIO_EXTI_Callback(uint16_t GPIO_Pin)
{
   HAL_Delay(10);
   switch(GPIO_Pin)
   {
     case KEY0_Pin:
  	 if(KEY0==GPIO_PIN_RESET)
  	 {
  		 LED0_TOGGLE();
  	  	 break;
  	 }

   case KEY1_Pin:
  	 if(KEY1==GPIO_PIN_RESET)
  	 {
  		 LED1_TOGGLE();
  	  	 break;
  	 }

   case KEY2_Pin:
  	 if(KEY2==GPIO_PIN_RESET)
  	 {
  		 LED0_TOGGLE();
  		 LED1_TOGGLE();
  	  	 break;
  	 }
   }
}
#endif
/* USER CODE END 0 */

/**
  * @brief  The application entry point.
  * @retval int
  */
int main(void)
{
  /* USER CODE BEGIN 1 */
//	uint8_t key=0;
	uint8_t sendbuf[5]={0x41, 0x42, 0x43, 0x44, 0x45};
	uint8_t sendchar[]="asadfhjhdj";
	uint8_t revbuf[6];
    uint8_t len;
    uint16_t times = 0;
  /* USER CODE END 1 */

  /* MCU Configuration--------------------------------------------------------*/

  /* Reset of all peripherals, Initializes the Flash interface and the Systick. */
  HAL_Init();

  /* USER CODE BEGIN Init */

  /* USER CODE END Init */

  /* Configure the system clock */
  SystemClock_Config();

  /* USER CODE BEGIN SysInit */

  /* USER CODE END SysInit */

  /* Initialize all configured peripherals */
  MX_GPIO_Init();
  MX_USART1_UART_Init();
  /* USER CODE BEGIN 2 */
 // HAL_UART_Transmit(&huart1, sendchar, sizeof(sendchar), 1000);
  /* USER CODE END 2 */

  /* Infinite loop */
  /* USER CODE BEGIN WHILE */
  while (1)
  {
#if 0
#if LED_BEEP==1
	  HAL_GPIO_WritePin(LED0_GPIO_Port, LED0_Pin, GPIO_PIN_SET);
	  HAL_GPIO_WritePin(LED1_GPIO_Port, LED1_Pin, GPIO_PIN_RESET);
	  HAL_Delay(500);
	  HAL_GPIO_WritePin(LED0_GPIO_Port, LED0_Pin, GPIO_PIN_RESET);
	  HAL_GPIO_WritePin(LED1_GPIO_Port, LED1_Pin, GPIO_PIN_SET);
	  HAL_Delay(500);

#elif LED_BEEP==2

	  LED0(1);
	  LED1(0);
	  BEEP(0);
	  HAL_Delay(500);
	  LED0(0);
	  LED1(1);
	  BEEP(0);
	  HAL_Delay(500);
#endif
#endif

#if 0
#if KEY==1
	  BEEP(0);
	  if(HAL_GPIO_ReadPin(GPIOE, KEY0_Pin)==GPIO_PIN_RESET)
	  {
		  HAL_Delay(10);
		  if(HAL_GPIO_ReadPin(GPIOE, KEY0_Pin)==GPIO_PIN_RESET)
		  {
			 // HAL_GPIO_TogglePin(GPIOE, LED0_Pin);
			  LED0_TOGGLE() ;
		  }
		  while(HAL_GPIO_ReadPin(GPIOE, KEY0_Pin)==GPIO_PIN_RESET);
	  }
	  HAL_Delay(10);
	  if(HAL_GPIO_ReadPin(GPIOE, KEY1_Pin)==GPIO_PIN_RESET)
	  {
		  HAL_Delay(10);
		  if(HAL_GPIO_ReadPin(GPIOE, KEY1_Pin)==GPIO_PIN_RESET)
		  {
			//  HAL_GPIO_TogglePin(GPIOE, LED1_Pin);
			  LED1_TOGGLE() ;
		  }
		  while(HAL_GPIO_ReadPin(GPIOE, KEY1_Pin)==GPIO_PIN_RESET);
	  }
	  HAL_Delay(10);
	  if(HAL_GPIO_ReadPin(GPIOE, KEY2_Pin)==GPIO_PIN_RESET)
	  {
		  HAL_Delay(10);
		  if(HAL_GPIO_ReadPin(GPIOE, KEY2_Pin)==GPIO_PIN_RESET)
		  {
			//  HAL_GPIO_TogglePin(GPIOE, LED1_Pin);
			// HAL_GPIO_TogglePin(GPIOE, LED0_Pin);
			  LED0_TOGGLE() ;
			  LED1_TOGGLE() ;
		  }
		  while(HAL_GPIO_ReadPin(GPIOE, KEY2_Pin)==GPIO_PIN_RESET);
	  }
	  HAL_Delay(10);

#elif  KEY==2
              /*KEY反转实验*/
	  BEEP(0);
	  key=key_scan(0);
	  if(key==KEY0_PRES)
	  {
		  LED0_TOGGLE();
	  }
	  else if(key==KEY1_PRES)
	  {
		  LED1_TOGGLE();
	  }
	  else if(key==KEY2_PRES)
	  {
		  LED0_TOGGLE();
		  LED1_TOGGLE();
	  }
#endif
#endif
	//   HAL_Delay(1000);
#if 0  //′??ú???ˉ2aê?
	  //	  HAL_UART_Transmit(&huart1, sendchar, sizeof(sendchar), 1000);
//	  	  printf("′??ú′òó?￡o%s\r\n",sendchar);
//	  	  printf("′??ú′òó?￡o%f\r\n",0.25);
	  	  HAL_UART_Receive(&huart1, revbuf, sizeof(revbuf), HAL_MAX_DELAY);//é????ú·￠?í??á?￡?MCU?óêü￡?HAL_MAX_DELAY?àμè?óê?￡??óê?6??i×??úoó￡?μ?áá
	  	  LED0_TOGGLE();
	  	  HAL_UART_Transmit(&huart1, revbuf, sizeof(revbuf), 1000);//°??óê?μ?μ?êy?Y·￠?íμ?é????ú??ê?
#endif

		  if (g_usart_rx_sta & 0x8000)        /* 接收到了数据? */
		  {
			  len = g_usart_rx_sta & 0x3fff;  /* 得到此次接收到的数据长度 */
			  printf("\r\n您发送的消息为:\r\n");

			  HAL_UART_Transmit(&huart1,(uint8_t*)g_usart_rx_buf, len, 1000);    /* 发送接收到的数据 */
			  while(__HAL_UART_GET_FLAG(&huart1, UART_FLAG_TC) != SET);          /* 等待发送结束 */
			  printf("\r\n\r\n");             /* 插入换行 */
			  g_usart_rx_sta = 0;
		  }
		  else
		  {
			  times++;

			  if (times % 5000 == 0)
			  {
				  printf("\r\n正点原子 STM32开发板 串口实验\r\n");
				  printf("正点原子@ALIENTEK\r\n\r\n\r\n");
			  }

			  if (times % 200 == 0) printf("请输入数据,以回车键结束\r\n");

			  if (times % 30  == 0) LED0_TOGGLE(); /* 闪烁LED,提示系统正在运行. */
              HAL_Delay(10);

		  }

    /* USER CODE END WHILE */

    /* USER CODE BEGIN 3 */
  }
  /* USER CODE END 3 */
}

/**
  * @brief System Clock Configuration
  * @retval None
  */
void SystemClock_Config(void)
{
  RCC_OscInitTypeDef RCC_OscInitStruct = {0};
  RCC_ClkInitTypeDef RCC_ClkInitStruct = {0};

  /** Configure the main internal regulator output voltage
  */
  __HAL_RCC_PWR_CLK_ENABLE();
  __HAL_PWR_VOLTAGESCALING_CONFIG(PWR_REGULATOR_VOLTAGE_SCALE1);

  /** Initializes the RCC Oscillators according to the specified parameters
  * in the RCC_OscInitTypeDef structure.
  */
  RCC_OscInitStruct.OscillatorType = RCC_OSCILLATORTYPE_HSE;
  RCC_OscInitStruct.HSEState = RCC_HSE_ON;
  RCC_OscInitStruct.PLL.PLLState = RCC_PLL_ON;
  RCC_OscInitStruct.PLL.PLLSource = RCC_PLLSOURCE_HSE;
  RCC_OscInitStruct.PLL.PLLM = 8;
  RCC_OscInitStruct.PLL.PLLN = 336;
  RCC_OscInitStruct.PLL.PLLP = RCC_PLLP_DIV2;
  RCC_OscInitStruct.PLL.PLLQ = 4;
  if (HAL_RCC_OscConfig(&RCC_OscInitStruct) != HAL_OK)
  {
    Error_Handler();
  }

  /** Initializes the CPU, AHB and APB buses clocks
  */
  RCC_ClkInitStruct.ClockType = RCC_CLOCKTYPE_HCLK|RCC_CLOCKTYPE_SYSCLK
                              |RCC_CLOCKTYPE_PCLK1|RCC_CLOCKTYPE_PCLK2;
  RCC_ClkInitStruct.SYSCLKSource = RCC_SYSCLKSOURCE_PLLCLK;
  RCC_ClkInitStruct.AHBCLKDivider = RCC_SYSCLK_DIV1;
  RCC_ClkInitStruct.APB1CLKDivider = RCC_HCLK_DIV4;
  RCC_ClkInitStruct.APB2CLKDivider = RCC_HCLK_DIV2;

  if (HAL_RCC_ClockConfig(&RCC_ClkInitStruct, FLASH_LATENCY_5) != HAL_OK)
  {
    Error_Handler();
  }
}

/* USER CODE BEGIN 4 */

/* USER CODE END 4 */

/**
  * @brief  This function is executed in case of error occurrence.
  * @retval None
  */
void Error_Handler(void)
{
  /* USER CODE BEGIN Error_Handler_Debug */
  /* User can add his own implementation to report the HAL error return state */
  __disable_irq();
  while (1)
  {
  }
  /* USER CODE END Error_Handler_Debug */
}

#ifdef  USE_FULL_ASSERT
/**
  * @brief  Reports the name of the source file and the source line number
  *         where the assert_param error has occurred.
  * @param  file: pointer to the source file name
  * @param  line: assert_param error line source number
  * @retval None
  */
void assert_failed(uint8_t *file, uint32_t line)
{
  /* USER CODE BEGIN 6 */
  /* User can add his own implementation to report the file name and line number,
     ex: printf("Wrong parameters value: file %s on line %d\r\n", file, line) */
  /* USER CODE END 6 */
}
#endif /* USE_FULL_ASSERT */
