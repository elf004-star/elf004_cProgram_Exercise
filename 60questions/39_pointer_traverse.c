#include <stdio.h>
#define MAXI 4
#define MAXJ 4

int main(void) {
    int mymarix[4][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}, {13, 14, 15, 16}};
    int *p = &mymarix[0][0];

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

    // Pointer traverse.
    // Print transpose matrix
    // printf("Print transpose.\n");
    // for (int i = 0; i < MAXI; i++) {
    //     for (int j = 0; j < MAXJ; j++) {
    //         printf("%d\t", mymarix[j][i]);
    //     }
    //     printf("\n");
    // }

    return 0;
}
