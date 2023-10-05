#include "major1.h"
#include "stdio.h"
#include <stdbool.h>


int main() {
    int choice = 0;

    while (choice != 5) {
        /* Preview menu  */
        printf("\nEnter the menu option for the operation to perform:\n");
        printf("(1) Count Leading Zeroes\n");
        printf("(2) Endian Swap\n");
        printf("(3) Rotate-right\n");
        printf("(4) Parity\n");
        printf("(5) EXIT\n");

        /* Take choice from keyboard  */
        scanf("%d", &choice);

        if (choice >=1 && choice <=5) {
            switch (choice) {
                case 1:
                    countZeros();
                    break;
                case 2:
                    endian_swap();
                    break;
                case 3:
                    rotateRight();
                    break;
                case 4:
                    compute_parity();
                    break;
                case 5:
                    printf("Program terminating. Goodbye...\n");
                    break;
            }
        }

        else{
            printf("Error: Invalid option. Please try again.\n");
            continue;
        }

    }
    return 0;
}
