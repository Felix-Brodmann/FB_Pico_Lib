#include "pico/stdlib.h"
#include "Pico_and_Temperatur.h"
#include <stdio.h>

int main() {
    
    stdio_init_all();

    printf("Temperatur: %f Celsius", Pico_and_Temperatur::readTemperatur('c'));

    sleep_ms(2000);

    printf("Temperatur: %f Fahrenheit", Pico_and_Temperatur::readTemperatur('f'));

    sleep_ms(2000);
  
    return 0;

}
