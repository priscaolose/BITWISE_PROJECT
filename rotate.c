/*
Rotate.c file by Hiram Dominguez
*/
#include "stdio.h"
#include "major1.h"
#include "stdbool.h"
#define INT_BITS 32

//validInput() function used from Endian.c
bool validNumber(int val){
    long range = 4294967295;
    if (val >= 1 && val <= range){
        return true;
    }
    return false;
}

//Rotate the first integer to the right  by the second integer.
int rotateRight(){
    unsigned int rotateNum1 = 0, rotateNum2 = 0;
    printf("Enter a whole number between 1 and 4294967295:\n");
    scanf("%u", &rotateNum1);
    while (!(validNumber(rotateNum1))){
        printf("Enter a 32-bit number (>= 1 and <= 4294967295, inclusively):\n");
        scanf("%u", &rotateNum1);
    }
    printf("Enter the number of positions to rotate-right the input (between 0 and 31, inclusively): \n");
    scanf("%u", &rotateNum2);
    while (!(validNumber(rotateNum2))){
        printf("Whoops! Try again. Enter a whole number between 0 and 31:\n");
        scanf("%u", &rotateNum2);
    }

    int rotatedValue = (rotateNum1 >> rotateNum2)|(rotateNum1 << (INT_BITS - rotateNum2));
    printf("%u rotated by %u is: %u\n", rotateNum1, rotateNum2, rotatedValue);

    return rotatedValue;
}

