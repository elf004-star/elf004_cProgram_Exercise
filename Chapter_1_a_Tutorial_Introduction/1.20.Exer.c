/* a program detab to replaces tabs in the input with the proper number of
 * blanks */
/* I think n should be a symbolic parameter by #define */

#include <stdio.h>

/* n should be define a symbolic parameter */
#define TAB_STOP 8 /* every eight columns per tab */

int main(void) {
  int c = 0;
  int pos = 0; /* current position */
  int spaces = 0;
  int i;

  while ((c = getchar()) != EOF) {
    if (c == '\t') {
      /* calculate the number of spaces */
      spaces = TAB_STOP - (pos % TAB_STOP);
      for (i = 0; i < spaces; i++) {
        putchar(' ');
        pos++;
      }
    } else if (c == '\n') {
      putchar(c);
      pos = 0; /* new line reflash the position */
    } else {
      putchar(c);
      pos++;
    }
  }

  return 0;
}
