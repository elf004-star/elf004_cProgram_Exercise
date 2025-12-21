#include <stdio.h>

/* copy input to output; 1st version */

int main() {
  int c;
  printf("EOF=%d\n", EOF);

  while ((c = getchar()) != EOF) {
    putchar(c);
  }

  return 0;
}
