#include "include/tasks.h"

void f_blink(void *pvParameter)
{
    // Initialize GPIO
    gpio_pad_select_gpio(BLINK_GPIO);
    gpio_set_direction(BLINK_GPIO, GPIO_MODE_OUTPUT);

    while (1)
    {
        /* Blink off (output low) */
        printf("Turning off the LED\n");
        gpio_set_level(BLINK_GPIO, LOW);
        vTaskDelay(1000 / portTICK_PERIOD_MS);

        /* Blink on (output high) */
        printf("Turning on the LED\n");
        gpio_set_level(BLINK_GPIO, HIGH);
        vTaskDelay(1000 / portTICK_PERIOD_MS);
    }
}

void task2(void *pvParameter){

    /* This task is just a test for the led library*/

    uint8_t counter = 0;
    ledsparams_t led = createLed(BLINK_GPIO,OUTPUT);
    ledInput(&led);

    while(1){
        printf("counter = %d \n", counter++);
        printf("Pin %d & mode %d\n",led.pinLed,led.mode);
        vTaskDelay(200/ portTICK_PERIOD_MS);
    }
}