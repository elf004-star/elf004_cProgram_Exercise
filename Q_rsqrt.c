#include <stdio.h>

/* quick square */
float Q_rsqrt(float number);

int main(void) {
  long testnumber = 2;
  float testresult = 0;

  testresult = Q_rsqrt(testnumber);

  printf("The result is %f\n", testresult);

  return 0;
}

/* quick square */
float Q_rsqrt(float number) {
  long i;
  float x2, y;
  const float threehalfs = 1.5F;

  x2 = number * 0.5F;
  y = number;
  i = *(long *)&y;           // evil floating point bit level hacking
  i = 0x5f3759df - (i >> 1); // what the fuck?
  y = *(float *)&i;
  y = y * (threehalfs - (x2 * y * y)); // 1st iteration
  // y = y * ( threehalfs - ( x2 * y * y ) );    // 2nd iteration, this can be
  // removed

  return y;
}
