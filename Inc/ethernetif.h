/**
 ******************************************************************************
  * File Name          : ethernetif.h
  * Description        : This file provides initialization code for LWIP
  *                      middleWare.
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; Copyright (c) 2019 STMicroelectronics.
  * All rights reserved.</center></h2>
  *
  * This software component is licensed by ST under Ultimate Liberty license
  * SLA0044, the "License"; You may not use this file except in compliance with
  * the License. You may obtain a copy of the License at:
  *                             www.st.com/SLA0044
  *
  ******************************************************************************
  */
  

#ifndef __ETHERNETIF_H__
#define __ETHERNETIF_H__

#include "lwip/err.h"
#include "lwip/netif.h"

#define LAN8742_ETHERNET_CONF_ETHADDR0                        0x00
#define LAN8742_ETHERNET_CONF_ETHADDR1                        0x80
#define LAN8742_ETHERNET_CONF_ETHADDR2                        0xe1
#define LAN8742_ETHERNET_CONF_ETHADDR3                        0x00
#define LAN8742_ETHERNET_CONF_ETHADDR4                        0x00
#define LAN8742_ETHERNET_CONF_ETHADDR5                        0x00

/* Within 'USER CODE' section, code will be kept by default at each generation */
/* USER CODE BEGIN 0 */

/* USER CODE END 0 */

/* Exported functions ------------------------------------------------------- */
err_t ethernetif_init(struct netif *netif);

void ethernetif_input(struct netif *netif);

u32_t sys_jiffies(void);
u32_t sys_now(void);

/* USER CODE BEGIN 1 */
void ethernet_link_check_state(struct netif *netif);

/* USER CODE END 1 */
#endif

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
