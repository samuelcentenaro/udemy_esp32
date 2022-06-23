/*
 * http server header file
 */
#ifndef MAIN_HTTP_SERVER_H_
#define MAIN_HTTP_SERVER_H_

#define OTA_UPDATE_PENDING 0
#define OTA_UPDATE_SUCCESSFUL 1
#define OTA_UPDATE_FAILED -1

/**
 * @brief Connection status for Wifi
 */
typedef enum http_server_wifi_connect_status
{
  NONE = 0,
  HTTP_WIFI_STATUS_CONNECTING,
  HTTP_WIFI_STATUS_CONNECT_FAILED,
  HTTP_WIFI_STATUS_CONNECT_SUCCESS,
  HTTP_WIFI_STATUS_DISCONNECTED,

} http_server_wifi_connect_status_e;

/**
 * @brief Messages for the HTTP monitor
 */
typedef enum http_server_message
{
  HTTP_MSG_WIFI_CONNECT_INIT = 0,
  HTTP_MSG_WIFI_CONNECT_SUCCESS,
  HTTP_MSG_WIFI_CONNECT_FAIL,
  HTTP_MSG_WIFI_USER_DISCONNECT,
  HTTP_MSG_OTA_UPDATE_SUCCESSFUL,
  HTTP_MSG_OTA_UPDATE_FAILED,
} http_server_message_e;

/**
 * @brief Structure for the message queue
 */
typedef struct http_server_queue_message
{
  http_server_message_e msgID;
} http_server_queue_message_t;

/**
 * @brief Send a message to the queue
 * @param msgID message ID from htto_server_message_e enum.
 * @return pdTRUE if an item was successfully sent to the querer, otherwise pdFALSE.
 * @note Expand the parameter list based on your requeriment e.g. how you've expanded the http_server_queue+message_t.
 */
BaseType_t http_server_monitor_send_message(http_server_message_e msgID);

/**
 * @brief Starts the HTPP server.
 */
void http_server_start(void);

/**
 * @brief Stops the HTPP server.
 */
void http_server_stop(void);

/**
 * @brief Timer callback function with calls esp_restart upon successful firmware update *
 */
void http_server_fw_update_reset_callback(void *arg);

#endif /* MAIN_HTTP_SERVER_H_ */