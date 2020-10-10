static void SendB_f(void const * argument){

	 struct netconn *conn, *newconn;
	  err_t err, accept_err;
	  const unsigned char b[] = "ABC";
	  /* Create a new TCP connection handle */
	  conn = netconn_new(NETCONN_TCP);
	  
	  err = netconn_bind(conn, NULL, 80);
	  if (err == ERR_OK) {
		  
	  netconn_listen(conn);
	
	  if (accept_err != ERR_OK){
		  accept_err = netconn_accept(conn, &newconn);
	  }
		  
	  for( ;; )
	  {
	        /* accept any icoming connection */
		  
	        if(accept_err == ERR_OK)
	        {
	    	    BSP_LED_Toggle(LED2);
	    	    netconn_write(newconn, b, strlen((char*)b), NETCONN_COPY );
	    	    osDelay(250);
	        }
	    /* Toggle LED4 each 250ms */

	  }
	 }
}
