#include "major1.h"
#include "stdio.h"

int main() {
    int choice;
    int number;
    int result;

    //while (choice != 5){

        /* Preview menu  */
        printf("Enter the menu option for the operation to perform:\n");
        printf("(1) Count Leading Zeroes\n");
        printf("(2) Endian Swap\n");
        printf("(3) Rotate-right\n");
        printf("(4) Parity\n");
        printf("(5) EXIT\n");

        /* Take choice from keyboard  */
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                break;
            case 2:
                printf("Enter a 32-bit number (>= 1 and <= 4294967295, inclusively): ");
                scanf("%d", &number);
                result = endian_swap(number);
                printf("Endian swap of %d gives: %d", number, result);
        }
    //}
    return 0;
}