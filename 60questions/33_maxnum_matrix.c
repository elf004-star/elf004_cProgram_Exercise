#include <stdio.h>

int main(void) {
    int mymarix[3][3] = {{1, 2, 3}, {4, 100, 6}, {7, 8, 9}};
    int temp_num = mymarix[0][0];
    int temp_i = 0;
    int temp_j = 0;

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d\t", mymarix[i][j]);
        }
        printf("\n");
    }

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (temp_num < mymarix[i][j]) {
                temp_i = i;
                temp_j = j;
                temp_num = mymarix[i][j];
            }
        }
    }

    printf("max number: %d\n", temp_num);
    printf("i: %d\n", temp_i);
    printf("j: %d\n", temp_j);

    return 0;
}
