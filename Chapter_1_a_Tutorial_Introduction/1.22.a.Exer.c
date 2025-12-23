/********************************************
  KnR 1-21
  --------
Write a program "entab" which replaces strings of
blanks with the minimum number of tabs and blanks
to achieve the same spacing.

Author: Rick Dearman
email: rick@ricken.demon.co.uk

*********************************************/

#include <stdio.h>

#define MAXLINE 1000 /* max input line size */
#define TAB2SPACE 4  /* 4 spaces to a tab */

char line[MAXLINE]; /* current input line */

int mygetline(void); /* taken from the KnR book. */

int main(void) {
    int i, t;
    int spacescount, len;

    while ((len = mygetline()) > 0) {
        spacescount = 0;
        for (i = 0; i < len; i++) {
            if (line[i] == ' ')
                spacescount++; /* increment counter for each spaces */
            if (line[i] != ' ')
                spacescount = 0;          /* reset counter */
            if (spacescount == TAB2SPACE) /* Now we have enough spaces to replaces them with a tab */
            {
                /* Because we are removing 4 spaces and replacing them with 1 tab we
                 * move back three chars and replaces the ' ' with a \t */
                i -= 3; /* same as "i = i - 3" */
                len -= 3;
                line[i] = '\t';
                /* Now move all the char's to the right into the places we have removed.
                 */
                for (t = i + 1; t < len; t++)
                    line[t] = line[t + 3];
                /* Now set the counter back to zero and move the end of line back 3
                 * spaces */
                spacescount = 0;
                line[len] = '\0';
            }
        }
        printf("%s", line);
    }

    return 0;
}

/* getline: specialized version */
int mygetline(void) {
    int c, i;
    extern char line[];

    for (i = 0; i < MAXLINE - 1 && (c = getchar()) != EOF && c != '\n'; ++i)
        line[i] = c;
    if (c == '\n') {
        line[i] = c;
        ++i;
    }
    line[i] = '\0';

    return i;
}
