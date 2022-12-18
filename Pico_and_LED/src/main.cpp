#include "pico/stdlib.h"
#include "Pico_and_LED.h"
#include <stdio.h>

int main() {
    
    stdio_init_all();

    Pico_and_LED LED;
    uint GPIO_number = 16;

    while(1) {

        printf("LED on\n");

        LED.turn_LED_on(GPIO_number);

        sleep_ms(1000);

        printf("LED off\n");

        LED.turn_LED_off(GPIO_number);
        
        sleep_ms(1000);

        printf("LED is now blinking for 10 times with a frequency of 1 Hz\n");

        LED.let_LED_blink(GPIO_number, 1, 10);
        
        sleep_ms(1000);

        printf("LED is now blinking forever\n");

        LED.let_LED_blink(GPIO_number, 1, -1);

    }

    return 0;

}
