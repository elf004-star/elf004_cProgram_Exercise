#include <stdio.h>

int main(void) {
    int mymarix[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d\t", mymarix[i][j]);
        }
        printf("\n");
    }

    // Print lower triangular matrix
    printf("Lower triangular matrix\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j <= i; j++) {
            printf("%d\t", mymarix[i][j]);
        }
        printf("\n");
    }

    // Print transpose matrix
    printf("Transpose\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d\t", mymarix[j][i]);
        }
        printf("\n");
    }

    return 0;
}
