cmake_minimum_required(VERSION 3.26)
project(bitwise_project C)

set(CMAKE_C_STANDARD 11)

add_library(bitwise_project
        major1.c
        major1.h
        Endian.c)
