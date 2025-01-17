/**
 * @file ciot_custom_config.h
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2024-06-11
 * 
 * @copyright Copyright (c) 2024
 * 
 */

#ifndef __CIOT_CUSTOM_CONFIG__H__
#define __CIOT_CUSTOM_CONFIG__H__

#define CIOT_CONFIG_LOG_LEVEL CIOT__LOG_LEVEL__LOG_LEVEL_INFO
#define CIOT_CONFIG_APP_VER 0, 1, 0
#define CIOT_CONFIG_HARDWARE_NAME "CIoT HTTP Server"

#define CIOT_CONFIG_FEATURE_STORAGE 0
#define CIOT_CONFIG_FEATURE_SYSTEM 1
#define CIOT_CONFIG_FEATURE_UART 0
#define CIOT_CONFIG_FEATURE_USB 0
#define CIOT_CONFIG_FEATURE_ETHERNET 0
#define CIOT_CONFIG_FEATURE_WIFI 0
#define CIOT_CONFIG_FEATURE_BLE_SCN 0
#define CIOT_CONFIG_FEATURE_GPIO 0
#define CIOT_CONFIG_FEATURE_NTP 0
#define CIOT_CONFIG_FEATURE_OTA 0
#define CIOT_CONFIG_FEATURE_DFU 0
#define CIOT_CONFIG_FEATURE_HTTP_CLIENT 0
#define CIOT_CONFIG_FEATURE_HTTP_SERVER 1
#define CIOT_CONFIG_FEATURE_MQTT_CLIENT 1
#define CIOT_CONFIG_FEATURE_TIMER 0
#define CIOT_CONFIG_FEATURE_SERIALIZER 0

#endif  //!__CIOT_CUSTOM_CONFIG__H__
