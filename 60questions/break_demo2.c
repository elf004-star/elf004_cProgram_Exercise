#include <stdio.h>

int main(void) {
    int i, j;
    int count = 0;

    for (i = 2; i < 100; i++) {
        for (j = 2; j <= i - 1; j++) {
            if (i % j == 0) {
                break;
            }
        }
        if (j > i - 1) {
            printf("%d", i);
            count++;
        }
    }

    printf("count=%d\n", count);

    return 0;
}
