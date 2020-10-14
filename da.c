  HAL_HASH_DeInit(&HashHandle);
  HashHandle.Init.DataType = HASH_DATATYPE_8B;
  HashHandle.Init.pKey = (uint8_t*)aKey;
  HashHandle.Init.KeySize = KEY_TAB_SIZE;

  if (HAL_HASH_Init(&HashHandle) != HAL_OK)
  {
    Error_Handler();
  }

  /* Compute HMAC-SHA1 */
  if (HAL_HMAC_SHA1_Start(&HashHandle, (uint8_t *)aInput, INPUT_TAB_SIZE, aSHA1Digest, 0xFF) != HAL_OK)
  {
    Error_Handler();
  }
  /* Compare computed digest with expected one */
  if (memcmp(aSHA1Digest, aExpectSHA1Digest, sizeof(aExpectSHA1Digest) / sizeof(aExpectSHA1Digest[0])) != 0)
  {
    Error_Handler();
  }
  else
  {
    BSP_LED_On(LED1);
  }
