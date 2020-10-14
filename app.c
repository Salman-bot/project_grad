  HAL_HASH_DeInit(&HashHandle);
  HashHandle.Init.DataType = HASH_DATATYPE_8B;
  HashHandle.Init.pKey = (uint8_t*)aKey;
  HashHandle.Init.KeySize = KEY_TAB_SIZE;
  
  if(HAL_HASH_Init(&HashHandle) != HAL_OK)
  {
    Error_Handler();
  }

  /* Compute HMAC-MD5 */
  if (HAL_HMAC_MD5_Start(&HashHandle, (uint8_t *)aInput, INPUT_TAB_SIZE, aMD5Digest, 0xFF) != HAL_OK)
  {
    Error_Handler();
  }
  /* Compare computed digest with expected one */
  if (memcmp(aMD5Digest, aExpectMD5Digest, sizeof(aExpectMD5Digest) / sizeof(aExpectMD5Digest[0])) != 0)
  {
    Error_Handler();
  }
  else
  {
    BSP_LED_On(LED4);
  }
