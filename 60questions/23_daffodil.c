#include <stdio.h>

int main(void) {
    int a, b, c;
    int i = 100;

    while (i >= 100 && i <= 999) {
        a = i / 100;
        b = i % 100 / 10;
        c = i % 10;

        if (a * a * a + b * b * b + c * c * c == i) {
            printf("%d ", i);
        }

        i++;
    }

    printf("\n");

    return 0;
}
