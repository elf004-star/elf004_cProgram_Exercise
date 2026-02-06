#include <stdio.h>
#define MAXC 80

int main(void) {
    char boxchar[MAXC] = {};
    char a[] = "abc";
    char p[] = "ABCD";
    char *temp = boxchar;

    for (int i = 0; i < sizeof(a) / sizeof(char) - 1; i++) {
        *temp = a[i];
        temp++;
    }

    for (int j = 0; j < sizeof(p) / sizeof(char) - 1; j++) {
        *temp = p[j];
        temp++;
    }

    *temp = '\0';

    printf("%s\n", boxchar);

    return 0;
}
