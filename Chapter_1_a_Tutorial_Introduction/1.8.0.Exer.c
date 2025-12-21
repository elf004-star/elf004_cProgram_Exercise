#include <stdio.h>

/* count characters in input; 1st version */

int main() {
  long nc;
  int c;

  nc = 0;
  c = 0;

  while ((c = getchar()) != EOF)
    ++nc;

  printf("%ld\n", nc);

  return 0;
}
