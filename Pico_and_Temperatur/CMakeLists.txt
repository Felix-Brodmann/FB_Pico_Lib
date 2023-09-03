cmake_minimum_required(VERSION 3.12)
include(pico_sdk_import.cmake)

set(CMAKE_CXX_STANDARD 17)

project(Pico_and_Temperatur)

pico_sdk_init()

add_executable(Pico_and_Temperatur
src/main.cpp
src/Pico_and_Temperatur.cpp
)

target_include_directories(Pico_and_Temperatur PUBLIC
inc
)

target_link_libraries(Pico_and_Temperatur
pico_stdlib
hardware_adc
)

pico_add_extra_outputs(Pico_and_Temperatur)

pico_enable_stdio_usb(Pico_and_Temperatur 1)
pico_enable_stdio_uart(Pico_and_Temperatur 0)
