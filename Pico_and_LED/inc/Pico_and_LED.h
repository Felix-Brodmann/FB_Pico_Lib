#include "pico/stdlib.h"

class Pico_and_LED {

public:

    int turn_LED_on(int GPIO_Pin);

    int turn_LED_off(int GPIO_Pin);
    
    int let_LED_blink(int GPIO_Pin, float frequency, int stop);

};
