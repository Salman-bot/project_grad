
//////////////////////////////////////////////above main:

static void watchdog(void);

//////////////////////////////////////////////inside main:

  /* Configure LED1 and LED3 */
  BSP_LED_Init(LED1);
  BSP_LED_Init(LED3);

  /* Configure Tamper push-button */
  BSP_PB_Init(BUTTON_TAMPER, BUTTON_MODE_EXTI);
  
   /*##-1- Check if the system has resumed from WWDG reset ####################*/
  if (__HAL_RCC_GET_FLAG(RCC_FLAG_WWDGRST) != RESET)
  {
    /* WWDGRST flag set: Turn LED1 on */
    BSP_LED_On(LED1);

    /* Clear reset flags */
    __HAL_RCC_CLEAR_RESET_FLAGS();
  }
  else
  {
    /* WWDGRST flag is not set: Turn LED1 off */
    BSP_LED_Off(LED1);
  }



  /*##-2- Configure the WWDG peripheral ######################################*/
  /* WWDG clock counter = (PCLK1 (45MHz)/4096)/8) = 1373 Hz (~728 us) 
     WWDG Window value = 80 means that the WWDG counter should be refreshed only 
     when the counter is below 80 (and greater than 64/0x40) otherwise a reset will 
     be generated. 
     WWDG Counter value = 127, WWDG timeout = ~728 us * 64 = 46 ms */
  WwdgHandle.Instance = WWDG;

  WwdgHandle.Init.Prescaler = WWDG_PRESCALER_8;
  WwdgHandle.Init.Window    = 80;
  WwdgHandle.Init.Counter   = 127;

  if (HAL_WWDG_Init(&WwdgHandle) != HAL_OK)
 {
    /* Initialization Error */
   Error_Handler();
 }

  /* Infinite loop */
  while (1)
  {
    /* Toggle LED3 */
    BSP_LED_Toggle(LED3);
    BSP_LED_Toggle(LED1);
    /* Insert 37 ms delay */
    HAL_Delay(37);


    /* Refresh WWDG: update counter value to 127, the refresh window is:
 between 34 ms (~728 * (127-80)) and 46 ms (~728 * 64) */

    if (HAL_WWDG_Refresh(&WwdgHandle) != HAL_OK)
    {
    	watchdog();
    }
  }




//////////////////////////////////////////////////////////////////////////under main:

static void Error_Handler(void)
{
  /* Turn LED3 on */
  BSP_LED_On(LED1);
  a = 6;
  while(1)
  {
  }
}

static void watchdog(void){
	  /* Turn LED3 on */
	  BSP_LED_On(LED1);
	  a = 6;
	  while(1)
	  {
	  }
}
