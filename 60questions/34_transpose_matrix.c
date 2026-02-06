#include <stdio.h>
#define MAXI 4
#define MAXJ 4

int main(void) {
    int mymarix[4][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}, {13, 14, 15, 16}};

    // Print original version
    for (int i = 0; i < MAXI; i++) {
        for (int j = 0; j < MAXJ; j++) {
            printf("%d\t", mymarix[i][j]);
        }
        printf("\n");
    }

    // Print transpose matrix
    printf("Print transpose.\n");
    for (int i = 0; i < MAXI; i++) {
        for (int j = 0; j < MAXJ; j++) {
            printf("%d\t", mymarix[j][i]);
        }
        printf("\n");
    }

    return 0;
}
