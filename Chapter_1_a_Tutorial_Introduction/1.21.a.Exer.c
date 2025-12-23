/* 1.21 Exercise answers */

#include <stdio.h>

#define TABSTOP 8

int main(void) {
    int c, pos = 0, spaces = 0;

    while ((c = getchar()) != EOF) {
        if (c == ' ') {
            ++spaces;
            ++pos;
        } else {
            // Output accumulated spaces as tabs + spaces
            while (spaces > 0) {
                int next_tab = TABSTOP - ((pos - spaces) % TABSTOP);
                if (spaces >= next_tab) {
                    putchar('\t');
                    spaces -= next_tab;
                } else {
                    putchar(' ');
                    --spaces;
                }
            }
            // Now output the non-space character
            putchar(c);
            if (c == '\n')
                pos = 0;
            else
                ++pos;
        }
    }

    // If file ends with spaces, handle them
    while (spaces > 0) {
        putchar(' ');
        --spaces;
    }

    return 0;
}
