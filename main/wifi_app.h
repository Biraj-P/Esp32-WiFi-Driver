#ifndef MAIN_WIFI_APP_H_
#define MAIN_WIFI_APP_H_

#include "esp_netif.h"
#include "esp_wifi_types.h"
#include "freertos/FreeRTOS.h"

//Wifi application settings
#define WIFI_AP_SSID                "esp32_AP"
#define WIFI_AP_PASSWORD            "birajpaul" 
#define WIFI_AP_CHANNEL             1   //1st channel selected
#define WIFI_AP_SSID_HIDDEN         0   //SSID visible
#define WIFI_AP_MAX_CONNECTIONS     5   //Number of maximum clients
#define WIFI_AP_BEACON_INTERVAL     100 //default value
#define WIFI_AP_IP                  "192.168.0.1"
#define WIFI_AP_GATEWAY             "192.168.0.1" //Should be same as IP
#define WIFI_AP_NETMASK             "255.255.255.0"
#define WIFI_AP_BANDWIDTH           WIFI_BW_HT20 //20MHz BW selected
#define WIFI_STA_POWER_SAVE         WIFI_PS_NONE //No power save mode selected
#define MAX_SSID_LENGTH             32  //IEEE standard maximum
#define MAX_PASSWORD_LENGTH         64  //IEEE standard maximum
#define MAX_CONNECTION_RETRIES      5

//netif object for the station and the AP
extern esp_netif_t* esp_netif_sta;
extern esp_netif_t* esp_netif_ap;

/**
 * Message IDs for the wifi app task
 * @note can expand as per requirement
*/
typedef enum wifi_app_message
{
    WIFI_APP_MSG_START_HTTP_SERVER = 0,
    WIFI_APP_MSG_CONNECTING_FROM_HTTP_SERVER,
    WIFI_APP_MSG_STA_CONNECTED_GOT_IP
} wifi_app_message_e;

/**
 * Structure for the message queue
 * @note can expand as per requirement
 */
typedef struct wifi_app_queue_message
{
    wifi_app_message_e msgID;
} wifi_app_queue_message_t;

/**
 * Sends a message to the queue
 * @param msgID from the wifi_app_message_e enum
 * @return pdTRUE if an item was successfully sent to the queue
 * @note can expand as per requirement
 */
BaseType_t wifi_app_send_message(wifi_app_message_e msgID); //BaseType_t is the return type

/**
 * Starts the wifi RTOS task
 */
void wifi_app_start(void);

#endif