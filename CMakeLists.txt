cmake_minimum_required(VERSION 3.16)
project(c_console_fps C)

set(CMAKE_C_STANDARD 11)

add_executable(c_console_fps src/main.c inc/level.h src/level.c inc/render.h src/render.c inc/screen.h src/screen.c)