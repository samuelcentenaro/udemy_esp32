/*
 * app_nvs.h
 * created by: Samuel Centenaro de Oliveira
 * created on: 06/18/22
 *
 */

#ifndef MAIN_APP_NVS_H_
#define MAIN_APP_NVS_H_

/**
 * @brief Save station mode Wifi credentials to NVS
 * @return ESP_OK if successful.
 */
esp_err_t app_nvs_save_sta_creds(void);

/**
 * @brief Loads the previously credentials from NVS
 * @return true if previously saved credentials were found.
 */
bool app_nvs_load_sta_creds(void);

/**
 * @brief Clear station mode Wifi credentials from NVS
 * @return ESP_OK if successful.
 */
esp_err_t app_nvs_clear_sta_creds(void);

#endif /* MAIN_APP_NVS_H_ */
