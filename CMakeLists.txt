cmake_minimum_required(VERSION 4.0)
project(dubong_language C)

set(CMAKE_C_STANDARD 11)

add_executable(dubong_language
        main.c
        common.h
        chunk.h
        chunk.c
        memory.h
        memory.c
        debug.h
        debug.c
        value.h
        value.c
)
