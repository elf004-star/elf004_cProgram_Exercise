#include <stdio.h>

int main(void) {
  int num = 0;

  printf("Please input a number: ");
  scanf("%d", &num);

  if ((num % 2) == 0) {
    printf("This number %d is odd!\n", num);
  }

  else {
    printf("This number %d is not odd!\n", num);
  }

  return 0;
}
