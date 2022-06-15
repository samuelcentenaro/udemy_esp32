// wifi_app.h:
// /* WIFI APP HEADER FILE */
//
#ifndef MAIN_WIFI_APP_H_
#define MAIN_WIFI_APP_H_

#include "esp_netif.h"

// Wifi appication settings
#define WIFI_AP_SSID "ESP32"
#define WIFI_AP_PASSWORD "12345678"
#define WIFI_AP_CHANNEL 1
#define WIFI_AP_SSID_HIDDEN 0
#define WIFI_AP_MAX_CONNECTIONS 5
#define WIFI_AP_BEACON_INTERVAL 100
#define WIFI_AP_IP "192.168.0.1"
#define WIFI_AP_GATEWAY "192.168.0.1"
#define WIFI_AP_NETMASK "255.255.255.0"
#define WIFI_AP_BANDWIDTH WIFI_BW_HT20
#define WIFI_STA_POWER_SAVE WIFI_PS_NONE
#define MAX_SSID_LENGTH 32
#define MAX_PASSWORD_LENGTH 64
#define MAX_CONNECTION_RETRIES 5

// netif object for the station and Access Point
extern esp_netif_t *esp_netif_sta;
extern esp_netif_t *esp_netif_ap;

/**
 * @brief Message ID for WiFi app task
 * @note Expand this based on your applications requirements
 */
typedef enum wifi_app_message
{
  WIFI_APP_MSG_START_HTTP_SERVER = 0,
  WIFI_APP_MSG_CONNECTING_FROM_HTTP_SERVER,
  WIFI_APP_MSG_STA_CONNECTED_GOT_IP,
  WIFI_APP_MSG_USER_REQUESTED_STA_DISCONNECT,
  WIFI_APP_MSG_LOAD_SAVED_CREDENTIALS,
  WIFI_APP_MSG_STA_DISCONNECTED,
} wifi_app_message_e;

/**
 * Structure for message queue
 * @note  Expand this based on your applications requirements e.g. how you've expand the wifi_app_message_t
 */
typedef struct wifi_app_queue_message
{
  wifi_app_message_e msgID;
} wifi_app_queue_message_t;

/**
 * @brief Send message to the queue
 * @param msgID Message ID from the wifi_app_message_e enum.
 * @return pdTRUE if successful, pdFALSE if failed
 * @note Expand the parameter list based on your requirementes.
 */
BaseType_t wifi_app_send_message(wifi_app_message_e msgID);

/**
 * @brief Starts the WIFi RTOS Task
 *
 */
void wifi_app_start(void);

/**
 * @brief Gets the wifi configuration
 */
wifi_config_t *wifi_app_get_wifi_config(void);

#endif // MAIN_WIFI_APP_H_
