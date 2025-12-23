#include <stdio.h>

/* print a histogram of the lengths of words in its input */

#define MAXWORDLEN 10

/* step1 count the number of every word */

int main(void) {
    int c = 0;
    int i = 0;
    int inspace = 0;
    int wordlen = 0;
    int lword = 0;
    long maxword = 0;

    long lengtharr[MAXWORDLEN + 2];

    for (i = 0; i <= (MAXWORDLEN + 1); i++) {
        lengtharr[i] = 0;
    }

    while ((c = getchar()) != EOF) {
        if (c == ' ' || c == '\n' || c == '\t') {
            inspace = 1;
        } else {
            inspace = 0;
        }

        if (inspace == 0) {
            wordlen++;
            if (wordlen <= MAXWORDLEN) {
                lword = 0;
                lengtharr[wordlen - 1]--;
                lengtharr[wordlen]++;
            } else if (lword == 0) {
                lengtharr[MAXWORDLEN]--;
                lengtharr[MAXWORDLEN + 1]++;
                lword = 1;
            }
        } else {
            wordlen = 0;
            lengtharr[0] = 0;
        }
    }

    printf("\n");

    for (i = 0; i <= MAXWORDLEN; i++) {
        printf("The number of %d lengths of words is %ld\n", i, lengtharr[i]);
    }

    printf("The number of >10 lengths of words is %ld\n", lengtharr[MAXWORDLEN + 1]);
    return 0;
}
