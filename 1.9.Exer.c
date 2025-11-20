#include <stdio.h>

/* replacing each string of one or more blanks by a single blanks */

int main() {
  int c, nb;

  c = 0;
  nb = 0;

  while ((c = getchar()) != EOF) {
    if (c == ' ')
      ++nb;
    else
      nb = 0;

    if (nb <= 1)
      putchar(c);
  }

  return 0;
}
