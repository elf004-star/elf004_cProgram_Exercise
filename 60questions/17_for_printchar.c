#include <stdio.h>

int main(void) {
    char firstchar = 0;
    int linenum = 0;

    printf("Input a char (for example F): ");
    scanf("%c", &firstchar);

    for (int i = firstchar; i >= 'A'; i--) {
        for (int j = 1; j <= linenum; j++) {
            printf("_");
        }
        for (int k = firstchar; k >= i; k--) {
            printf("%c", k);
        }
        printf("\n");
        linenum += 1;
    }

    return 0;
}
