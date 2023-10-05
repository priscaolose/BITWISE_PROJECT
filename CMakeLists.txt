cmake_minimum_required(VERSION 3.26)
project(. C)

set(CMAKE_C_STANDARD 11)

add_library(.
        ../major1.c
        ../major1.h
        Endian.c
        major1.c
        clz.c
        rotate.c
)
