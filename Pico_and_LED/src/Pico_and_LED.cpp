#include "Pico_and_LED.h"

Pico_and_LED::Pico_and_LED(int GPIO_Pin) {

    GPIO_Num = GPIO_Pin;

    gpio_init(GPIO_Num);

    gpio_set_dir(GPIO_Num, true);

}

int Pico_and_LED::turn_LED_on() {

    if(GPIO_Num < 0 && GPIO_Num > 28) {

        return -1;

    }

    gpio_put(GPIO_Num, true);

    GPIO_is_on = true;

    return 0;

}

int Pico_and_LED::turn_LED_off() {

    if(GPIO_Num < 0 && GPIO_Num > 28) {

        return -1;

    }

    gpio_put(GPIO_Num, false);

    GPIO_is_on = false;

    return 0;

}

int Pico_and_LED::get_LED_state() {

    if(GPIO_Num < 0 && GPIO_Num > 28) {

        return -1;

    }

    if(GPIO_is_on = true) {

        return 1;

    }

    else {

        return 0;

    }

}

int Pico_and_LED::let_LED_blink(float frequency, int stop) {

    if(GPIO_Num < 0 && GPIO_Num > 28) {

        return -1;

    }

    if(frequency <= 0) {

        return -2;

    }

    if(stop < -1 || stop == 0) {

        return -3;

    }

    int i = 0;

    if(stop == -1) {

        while(i == 0) {

        gpio_put(GPIO_Num, true);

        sleep_ms((frequency * 1000) / 2);

        gpio_put(GPIO_Num, false);

        sleep_ms((frequency * 1000) / 2);

        }
    }

    while(i < stop) {

        gpio_put(GPIO_Num, true);

        sleep_ms((frequency * 1000) / 2);

        gpio_put(GPIO_Num, false);

        sleep_ms((frequency * 1000) / 2);

        i = i++;

    }

    GPIO_is_on = false;

    return 0;
    
}
