#include "pico/stdlib.h"
#include "Pico_and_LED.h"
#include <stdio.h>

int main() {
    
    stdio_init_all();

    Pico_and_LED LED(16);

    while(1) {

        LED.turn_LED_on();

        if(LED.get_LED_state() == 1) {

            printf("LED on\n");

        }

        sleep_ms(1000);

        LED.turn_LED_off();
        
        if(LED.get_LED_state() == 0) {

            printf("LED off\n");

        }

        sleep_ms(1000);

        printf("LED is now blinking for 10 times with a frequency of 1 Hz\n");

        LED.let_LED_blink(1, 10);
        
        sleep_ms(5000);

        printf("LED is now blinking forever\n");

        LED.let_LED_blink(1, -1);

    }

    return 0;

}
