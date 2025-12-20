#include <stdio.h>
/* replace tab with proper number of blanks */

#define TAB_SPA 8

int main(void) {
  int c = 0;
  int i = 0;

  int endstatus = 0;

  while (endstatus == 0) {
    c = getchar();
    if (c == EOF) {
      endstatus = 1;
    } else if (c == '\t') {
      for (i = 0; i < TAB_SPA; ++i) {
        putchar(' ');
      }
    } else {
      putchar(c);
    }
  }

  return 0;
}
