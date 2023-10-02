#include "major1.h"
#include "stdio.h"

int main() {
    int choice;

    while (choice != 5){

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
                endian_swap();
                break;
            case 3:
                break;
            case 4:
                break;
            case 5:
                printf("Program termintating. Goodbye...");
                break;
        }
    }
    return 0;
}