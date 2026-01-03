#include <stdio.h>

int main(void) {
    int i, j, k;
    i = j = k = 0;

    for (i = 1; i <= 9; i++) {
        for (j = 0; j <= 9; j++) {
            for (k = 0; k <= 9; k++) {
                if (100 * i + 10 * j + k == i * i * i + j * j * j + k * k * k) {
                    printf("%d%d%d: 100 * %d + 10 * %d + %d = %d^3 + %d^3 + %d^3\n", i, j, k, i, j, k, i, j, k);
                }
            }
        }
    }

    return 0;
}
