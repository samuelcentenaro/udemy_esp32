// Tasks_common.h header file
// /* TASKS_COMMON_H_ */
//
#ifndef MAIN_TASKS_COMMON_H_
#define MAIN_TASKS_COMMON_H_
//

// wifi app task
#define WIFI_APP_TASK_STACK_SIZE 4096
#define WIFI_APP_TASK_PRIORITY 5
#define WIFI_APP_TASK_CORE_ID 0

// http server task
#define HTTP_SERVER_TASK_STACK_SIZE 8192
#define HTTP_SERVER_TASK_PRIORITY 4
#define HTTP_SERVER_TASK_CORE_ID 0

// http server monitor task
#define HTTP_SERVER_MONITOR_STACK_SIZE 4096
#define HTTP_SERVER_MONITOR_PRIORITY 3
#define HTTP_SERVER_MONITOR_CORE_ID 0

// DHT22 Sensor Task
#define DHT22_TASK_STACK_SIZE 4096
#define DHT22_TASK_PRIORITY 5
#define DHT22_TASK_CORE_ID 1

#endif /* MAIN_TASKS_COMMON_H_ */
