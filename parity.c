// Written by Sienna Newby-Sanchez
#include "major1.h"

#include <stdio.h>
#include <stdbool.h>

bool validInput(int val)
{
    long range = 4294967296;
    if (val >= 1 && val <= range)
    {
        return true;
    }
    return false;
}

int compute_parity()
{
    int number;
    printf("Enter a number to compute parity: ");
    scanf("%d", &number);

    while (!validInput(number))
    {
        printf("Invalid input. Please enter a number between 1 and 4294967295.\n");
        printf("Enter a number to compute parity: ");
        scanf("%d", &number);
    }

    int count = 0;
    int originalNumber = number;

    while (number)
    {
        count ^= (number & 1);
        number >>= 1;
    }

    printf("Parity of the entered number \033[1;34m%d\033[0m is \033[1;32m%s\033[0m.\n", originalNumber, count ? "odd" : "even");

    return count;
}
