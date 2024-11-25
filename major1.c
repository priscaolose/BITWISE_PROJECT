#include "major1.h"

int main()
{
    int choice = 0;

    while (choice != 5)
    {
        /* Preview menu  */
        printf("\nEnter the menu option for the operation to perform:\n");
        printf("(1) Count Leading Zeroes\n");
        printf("(2) Endian Swap\n");
        printf("(3) Rotate-right\n");
        printf("(4) Parity\n");
        printf("(5) EXIT\n");

        /* Take choice from keyboard  */
        scanf("%d", &choice);

        switch (choice)
        {
        }
    }
    return 0;
}
