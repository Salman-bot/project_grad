static void SendB_f(void const * argument){

	 struct netconn *conn, *newconn;
	  err_t err, accept_err;
	  const unsigned char b[] = "ABC";
	  /* Create a new TCP connection handle */
	  conn = netconn_new(NETCONN_TCP);
	  err = netconn_bind(conn, NULL, 80);
	  netconn_listen(conn);

	  for( ;; )
	  {
	        /* accept any icoming connection */
		  accept_err = netconn_accept(conn, &newconn);
	        if(accept_err == ERR_OK)
	        {
	    	    BSP_LED_Toggle(LED2);
	    	    netconn_write(newconn, b, strlen((char*)b), NETCONN_COPY );
	    	    osDelay(250);
	        }
	    /* Toggle LED4 each 250ms */

	  }
}
