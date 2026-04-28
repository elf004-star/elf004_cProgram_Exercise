#include <stdio.h>
#define MAXLINE 100

int main(void) {
    int lim = MAXLINE;
    int i = 0;
    char c = '\0';
    char s[MAXLINE];
    c = getchar();

    for (i = 0; i < lim - 1; i++) {
        if (c == '\n') {
            break;
        }
        if (c == EOF) {
            break;
        }
        s[i] = c;
        c = getchar();
    }
    s[i] = '\0';

    printf("%s\n", s);

    return 0;
}
