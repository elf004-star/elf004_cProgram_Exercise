#include <stdio.h>

/* a program to make tabs and backspaces visible in an unambiguous way */

int main() {
  int c;

  c = 0;

  while ((c = getchar()) != EOF) {
    if (c == '\t')
      printf("\\t");
    else if (c == '\b')
      printf("\\b");
    else if (c == '\\') {
      printf("\\");
      printf("\\");
    } else
      putchar(c);
  }

  return 0;
}
