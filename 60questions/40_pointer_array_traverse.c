#include <stdio.h>
#define MAXI 4
#define MAXJ 4

int main(void) {
    int mymarix[MAXI][MAXJ] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}, {13, 14, 15, 16}};
    int *p = &mymarix[0][0];
    int (*q)[MAXJ] = mymarix;

    // Print original version
    printf("normal method\n");
    for (int i = 0; i < MAXI; i++) {
        for (int j = 0; j < MAXJ; j++) {
            printf("%d\t", mymarix[i][j]);
        }
        printf("\n");
    }

    // print by Pointer
    printf("pointer  method\n");
    for (int i = 0; i < MAXI * MAXJ; i++) {
        printf("%p: %d\t", p + i, *(p + i));
        if ((i + 1) % MAXJ == 0) {
            printf("\n");
        }
    }
    // traverse by array pointer
    printf("Print by array pointer\n");
    for (int i = 0; i < MAXI; i++) {
        for (int j = 0; j < MAXJ; j++) {
            printf("%p: %p: %p: %d\t", q + i, *(q + i), *(q + i) + j, *(*(q + i) + j));
        }
        printf("\n");
    }

    return 0;
}
