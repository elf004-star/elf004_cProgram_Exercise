#include <stdio.h>
#define MAXN 10

int main(void) {
    int yang_triangle[MAXN][MAXN] = {};

    // Print the original version.
    for (int i = 0; i < MAXN; i++) {
        for (int j = 0; j <= i; j++) {
            printf("%d\t", yang_triangle[i][j]);
        }
        printf("\n");
    }

    yang_triangle[0][0] = 1;

    // Calculate the result.
    for (int i = 1; i < MAXN; i++) {
        yang_triangle[i][0] = 1;
        for (int j = 1; j <= i; j++) {
            yang_triangle[i][j] = yang_triangle[i - 1][j - 1] + yang_triangle[i - 1][j];
        }
    }

    // Print the result.
    for (int i = 0; i < MAXN; i++) {
        for (int j = 0; j <= i; j++) {
            printf("%d\t", yang_triangle[i][j]);
        }
        printf("\n");
    }

    return 0;
}
