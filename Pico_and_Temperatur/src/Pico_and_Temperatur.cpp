#include "Pico_and_Temperatur.h"

float Pico_and_Temperatur::readTemperatur(char unit) {

    uint16_t rawValue = 0;

    float voltage = 0;

    float temperatur = 0;

    const float conversion = 3.3f/(1<<12);

    adc_init();

    adc_set_temp_sensor_enabled(true);

    adc_select_input(4);

    rawValue = adc_read();

    voltage = rawValue * conversion;

    temperatur = 27 - (voltage - 0.706) / 0.001721;

    if(unit == 'c')
    {

        return temperatur;

    }
    else if(unit == 'f')
    {

        return (temperatur * 1.8) + 32;

    }

    return 0;

}
