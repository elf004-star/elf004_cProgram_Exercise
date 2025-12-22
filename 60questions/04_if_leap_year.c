#include <stdio.h>

int main(void) {
  int num, leapnum;
  num = leapnum = 0;

  printf("Input a number(> 0): ");
  scanf("%d", &num);

  if (num < 0) {
    printf("Invalid number\n");
  } else if (num % 4 == 0) {
    if (num % 100 == 0) {
      if (num % 400 == 0) {
        leapnum = 1;
      } else {
        leapnum = 0;
      }
    } else {
      leapnum = 1;
    }
  }

  if (leapnum == 1) {
    printf("%d year is a leap year\n", num);
  } else {
    printf("%d year is not a leap year\n", num);
  }

  return 0;
}
