#include "pico/stdlib.h"
#include "Pico_and_Button.h"
#include <stdio.h>

int main() {
    
    stdio_init_all();

    Pico_and_Button Button(16);

    while(1) {

        if(Button.is_pressed() = true) {

            printf("Button pressed\n");

        }

        sleep_ms(10);

    }

    return 0;

}
