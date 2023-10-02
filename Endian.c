//
// Created by prisca olose on 9/21/23.
//
#include "stdio.h"
#include "major1.h"
#include "stdbool.h"

bool validInput(int val){
    long range = 4294967296;
    if (val >= 1 && val <= range){
        return true;
    }
    return false;
}

int endian_swap(){

    int byte_zero; //least sig. bit
    int byte_one;
    int byte_two;
    int byte_three; // most sig. bit
    int result;
    int raw_result;
    int number;

    printf("Enter a 32-bit number (>= 1 and <= 4294967295, inclusively): ");
    scanf("%d", &number);
    while (!(validInput(number))) {
        printf("Enter a 32-bit number (>= 1 and <= 4294967295, inclusively): ");
        scanf("%d", &number);
    }

    byte_zero = ((number & 0x000000FF) << 24);
    byte_one = ((number & 0x0000FF00) << 8);
    byte_two = ((number & 0x00FF0000) >> 24);
    byte_three = ((number & 0xFF000000) >> 8);
    raw_result = (byte_zero | byte_one | byte_two | byte_three);
    result = printf("Endian swap of %d gives: %d\n", number, raw_result);

    return result;
}

