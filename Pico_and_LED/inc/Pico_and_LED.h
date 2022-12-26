#include "pico/stdlib.h"

class Pico_and_LED {

private:

    int GPIO_Num = -1;

    bool GPIO_is_on = false;

public:

    Pico_and_LED(int GPIO_Pin);

    int turn_LED_on();

    int turn_LED_off();

    int get_LED_state();
    
    int let_LED_blink(float frequency, int stop);

};
