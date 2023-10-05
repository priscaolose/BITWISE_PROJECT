//
// Created by Bibek Bajagain on 10/02/23.
//
#include "major1.h"

#include <stdbool.h>
#include <stdio.h>

bool isValidInput(int num){
    long range = 4294967295;
    if(num>=1 && num<=range){
        return true;
    }else{
        return false;
    }
}

void countZeros()
{
   
    int num;
    int res = 0;
    do {
        printf("Enter a 32-bit number (>= 1 and <= 4294967295, inclusively): ");
        scanf("%d", &num);

        if(isValidInput(num)){
                int total_bits = sizeof(num) * 8;
                int org_num = num;

                // Keep shifting x by one until the leftmost bit does not become 1.
                while (!(num & (1U << (total_bits - 1)))) {
                            num = (num << 1);
                            res++;
                }

                printf("The number of leading zeroes in %d is: %d \n", org_num ,res);
                break;
        }
    } while (!isValidInput(num));
}
