#include <stdio.h>

/* count digits, white spaces, others */

int main() {
    int c, i, nwhite, nother;
    int ndigits[10];

    nwhite = nother = 0; // notice initialize

    for (i = 0; i <= 9; ++i) { // notice 9 not 10
        ndigits[i] = 0;
    }

    while ((c = getchar()) != EOF) {
        if (c >= '0' && c <= '9') { // notice ''
            ++ndigits[c - '0'];
        } else if (c == ' ' || c == '\n' || c == '\t') {
            ++nwhite;
        } else {
            ++nother;
        }
    }

    printf("digits =");
    for (i = 0; i <= 9; ++i) {
        printf(" %d", ndigits[i]);
    }
    printf(", white spaces = %d, others = %d\n", nwhite, nother);
    return 0;
}
