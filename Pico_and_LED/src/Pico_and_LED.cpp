#include "Pico_and_LED.h"

int Pico_and_LED::turn_LED_on(int GPIO_Pin) {

    if(GPIO_Pin < 0 && GPIO_Pin > 28) {

        return -1;

    }

    uint16_t LED = GPIO_Pin;

    gpio_init(LED);

    gpio_set_dir(LED, true);

    gpio_put(LED, true);

    return 0;

}

int Pico_and_LED::turn_LED_off(int GPIO_Pin) {

    if(GPIO_Pin < 0 && GPIO_Pin > 28) {

        return -1;

    }

    uint16_t LED = GPIO_Pin;

    gpio_init(LED);

    gpio_set_dir(LED, true);

    gpio_put(LED, false);

    return 0;

}

int Pico_and_LED::let_LED_blink(int GPIO_Pin, float frequency, int stop) {

    if(GPIO_Pin < 0 && GPIO_Pin > 28) {

        return -1;

    }

    if(frequency <= 0) {

        return -2;

    }

    if(stop <= -2 || stop == 0) {

        return -3;

    }

    uint16_t LED = GPIO_Pin;

    gpio_init(LED);

    gpio_set_dir(LED, true);

    int i = 0;

    if(stop == -1) {

        while(i == 0) {

        gpio_put(LED, true);

        sleep_ms((frequency * 1000) / 2);

        gpio_put(LED, false);

        sleep_ms((frequency * 1000) / 2);

        }
    }

    while(i < stop) {

        gpio_put(LED, true);

        sleep_ms((frequency * 1000) / 2);

        gpio_put(LED, false);

        sleep_ms((frequency * 1000) / 2);

        i = i++;

    }

    return 0;
}
