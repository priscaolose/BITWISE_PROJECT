#include "major1.h"

int main() {
    int choice;

    do {

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
            
        }
    }while (choice != 5);    
    return 0;
}