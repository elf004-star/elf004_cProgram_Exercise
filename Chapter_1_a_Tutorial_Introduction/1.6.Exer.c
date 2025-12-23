#include <stdio.h>
/* copy input to output; 1st version */

int main() {
    int c;
    printf("EOF=%d\n", EOF);
    c = getchar() != EOF;
    printf("%d\n", c);
    while (c != EOF) {
        putchar(c);
        c = getchar() != EOF;
        printf("%d\n", c);
    }

    return 0;
}
