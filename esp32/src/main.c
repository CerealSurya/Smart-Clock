#include <stdio.h>
#include "driver/gpio.h"
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
//#include "./inc/main.h"

void app_main(void)
{
    gpio_set_direction(GPIO_NUM_14, GPIO_MODE_OUTPUT);

    while(true)
    {
        gpio_set_level(GPIO_NUM_14, 1);
        vTaskDelay(10);
    }
}