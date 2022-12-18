cmake_minimum_required(VERSION 3.12)
include(pico_sdk_import.cmake)

set(CMAKE_CXX_STANDARD 17)

project(Pico_and_LED)  

pico_sdk_init()

add_executable(Pico_and_LED
src/main.cpp
src/Pico_and_LED.cpp
)

target_include_directories(Pico_and_LED PUBLIC
inc
)

target_link_libraries(Pico_and_LED
pico_stdlib
)

pico_add_extra_outputs(Pico_and_LED)

pico_enable_stdio_usb(Pico_and_LED 1)
pico_enable_stdio_uart(Pico_and_LED 0)
