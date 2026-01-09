#include <stdio.h>

int main(void) {
    int i = 1;
    int sum = 0;

    while (i <= 100) {
        if (i % 2 == 0) {
            sum = sum + i;
        }
        i++;
    }

    printf("The result is %d.\n", sum);

    return 0;
}
