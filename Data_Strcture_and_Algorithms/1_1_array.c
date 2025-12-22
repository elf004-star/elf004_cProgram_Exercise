#include <stdio.h>

int main(void) {
  int test_ar[10];
  int i;

  for (i = 0; i <= 9; ++i) {
    test_ar[i] = 0;
    printf("%d ", test_ar[i]);
  }

  printf("\n");

  return 0;
}
