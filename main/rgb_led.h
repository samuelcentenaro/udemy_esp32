/* RGB LED HEADER FILE */

#ifndef MAIN_RGB_LED_H_
#define MAIN_RGB_LED_H_

// RGB LED GPIOs
#define RGB_LED_RED_GPIO GPIO_NUM_12
#define RGB_LED_GREEN_GPIO GPIO_NUM_13
#define RGB_LED_BLUE_GPIO GPIO_NUM_14

// RGE LED color mix channels
#define RGB_LED_CHANNEL_NUM 3

// RGE LED configuration
typedef struct
{
  uint8_t channel;
  uint8_t gpio;
  uint8_t mode;
  uint8_t timer_index;
} ledc_info_t;

ledc_info_t ledc_ch[RGB_LED_CHANNEL_NUM];

// Color to indicate WiFi app started
void rgb_led_wifi_app_started(void);

// Color to indicate HTTP server started
void rgb_led_http_server_started(void);

// color to indicate WiFi connected
void rgb_led_wifi_connected(void);

#endif // MAIN_RGB_LED_H_
