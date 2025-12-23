#include <stdio.h>

/* a program to count blanks, tabs, and newlines. */

int main() {

    int c;
    long nb, nt, nl;

    c = 0;
    nb = 0;
    nt = 0;
    nl = 0;

    while ((c = getchar()) != EOF) {
        if (c == ' ')
            ++nb;
        if (c == '\t')
            ++nt;
        if (c == '\n')
            ++nl;
    }
    printf("The number of blanks is %ld\n", nb);
    printf("The number of tabs is %ld\n", nt);
    printf("The number of newlines is %ld\n", nl);

    return 0;
}
