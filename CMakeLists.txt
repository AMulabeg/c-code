cmake_minimum_required(VERSION 3.23)
project(c_code C)

set(CMAKE_C_STANDARD 11)

include_directories(.)

add_executable(c_code
        c-course.c
        clearing.c
        helloworld.c)
