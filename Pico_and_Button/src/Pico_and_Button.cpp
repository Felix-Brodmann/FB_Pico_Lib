#include "Pico_and_Button.h"

bool Pico_and_Button::is_pressed(int GPIO_Pin) {

    if(GPIO_Pin < 0 && GPIO_Pin > 28) {

        return false;

    }

    uint16_t Button = GPIO_Pin;

    gpio_init(Button);

    gpio_set_dir(Button, false);

    if(gpio_get(Button) == 0) {

        return false;

    }

    else {

        return true;

    }

}
