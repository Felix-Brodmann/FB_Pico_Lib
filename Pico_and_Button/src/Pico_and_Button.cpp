#include "Pico_and_Button.h"

Pico_and_Button::Pico_and_Button(int GPIO_Pin) {

    GPIO_Num = GPIO_Pin;

    gpio_init(GPIO_Num);

    gpio_set_dir(GPIO_Num, false);

}

bool Pico_and_Button::is_pressed() {

    if(GPIO_Num < 0 && GPIO_Num > 28) {

        return -1;

    }

    if(gpio_get(GPIO_Num) == 0) {

        return false;

    }

    else {

        return true;

    }

}
