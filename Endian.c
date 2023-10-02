//
// Created by prisca olose on 9/21/23.
//
#include "stdio.h"
#include "major1.h"

int endian_swap(int value){

    int byte_zero; //least sig. bit
    int byte_one;
    int byte_two;
    int byte_three; // most sig. bit
    int raw_result;
    int result;


    int number;
    //printf("Enter a 32-bit number (>= 1 and <= 4294967295, inclusively): ");
    //scanf("%d", &number);
    //while (number >=1) {

        byte_zero = ((value & 0x000000FF) << 24);
        byte_one = ((value & 0x0000FF00) << 8);
        byte_two = ((value & 0x00FF0000) >> 24);
        byte_three = ((value & 0xFF000000) >> 8);

        result = (byte_zero | byte_one | byte_two | byte_three);
        //result = printf("Endian swap of %d gives: %d", number, raw_result);
    //}
    //printf("Enter a 32-bit number (>= 1 and <= 4294967295, inclusively): ");
    return result;
}