#include "pico/stdlib.h"

class Pico_and_Button {

private:

    int GPIO_Num = -1;

public:

    Pico_and_Button(int GPIO_Pin);

    bool is_pressed();

};
