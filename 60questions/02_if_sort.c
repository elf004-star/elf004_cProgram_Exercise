#include <stdio.h>

int main(void) {
  int a, b, c, t;
  a = b = c = t = 0;

  printf("Input tree number: ");
  scanf("%d%d%d", &a, &b, &c);

  if (a < b) {
    t = b;
    b = a;
    a = t;
  }
  if (a < c) {
    t = c;
    c = a;
    a = t;
  }

  if (b < c) {
    t = c;
    c = b;
    b = t;
  }

  printf("%d, %d, %d\n", a, b, c);

  return 0;
}
