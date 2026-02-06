#include <stdio.h>

int main(void) {
    int myarray[4][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}, {10, 11, 12}};
    int *q = myarray[0];
    int *p[4][3];

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 3; j++) {
            p[i][j] = q++;
        }
    }

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d\t", *p[i][j]);
        }
        printf("\n");
    }

    return 0;
}
