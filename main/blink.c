/* Blink Example

   This example code is in the Public Domain (or CC0 licensed, at your option.)

   Unless required by applicable law or agreed to in writing, this
   software is distributed on an "AS IS" BASIS, WITHOUT WARRANTIES OR
   CONDITIONS OF ANY KIND, either express or implied.
*/

#include <stdio.h>
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "driver/gpio.h"
#include "sdkconfig.h"

/* Include every component header file like the next lines of code. With all the file path. */
 
#include "../components/leds/include/leds.h"
#include "../components/tasks/include/tasks.h"

/* Can use project configuration menu (idf.py menuconfig) to choose the GPIO to blink,
   or you can edit the following line and set a number here.
*/

bool startTasks(void)
{
    /*  Task f_blink makes the GPIO 2 of the ESP32 blinks and attached to the CORE 0. 
        If you want to see the source code you can go to task.c file*/

    BaseType_t task_blinkled = xTaskCreatePinnedToCore(f_blink, "f_blink", 1 * configMINIMAL_STACK_SIZE, NULL, 2, NULL, 0);
    if (task_blinkled != pdPASS)
    {
        printf("Task can't be initialized \n");
        while (true)
        {
        }; // Can't start the program if this happends
    }
    else
    {
        printf("Task1 initialized \n");
    }

    /* Task2 is a test task that is attached to CORE 1 */
    BaseType_t task_print = xTaskCreatePinnedToCore(task2, "task2", 3 * configMINIMAL_STACK_SIZE, NULL, 2, NULL, 1);
    if (task_print != pdPASS)
    {
        printf("Task can't be initialized \n");
        while (true)
        {

        }; // Can't start the program if this happends
    }
    else
    {
        printf("Task2 initialized \n");
    }

    return true;
}

void app_main(void)
{
    if (startTasks() == true)
    {
        printf("Task were created successfully \n");
    }
}
