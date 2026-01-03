#include <stdio.h>
#define MYSTAR '*'
#define CONSTLINE 36

int main(void) {
    for (int i = 1; i <= CONSTLINE; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%c", MYSTAR);
            if (j < i) {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}
