cmake_minimum_required(VERSION 3.21)
project(StateMachine C)

set(CMAKE_C_STANDARD 11)

include_directories(inc)

add_executable(StateMachine
        inc/def.h
        src/def.c
        src/main.c)
