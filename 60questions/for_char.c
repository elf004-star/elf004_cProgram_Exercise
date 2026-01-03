#include <stdio.h>

int main(void) {
    char ch;
    int i, j;
    ch = getchar();
    if (ch >= 'A' && ch <= 'Z') {
        for (i = 0; i <= ch - 'A'; i++) {
            for (j = 0; j < i; j++) {
                putchar('_');
            }
            for (j = 0; j <= i; j++) {
                putchar(ch -j);
            }
            putchar('\n');
        }

    } else {
        printf("input invalid\n");
        return 0;
    }
    
    return 0;
}
