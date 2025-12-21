#include <stdio.h>
/* print Celsius2Fahrenheit table
     for celsius = -20, -10, 0, 10, 20, ..., 150 */
int main() {
  printf("Print Celsius2Fahrenheit table.\n");
  float fahr, celsius;
  float lower, upper, step;

  lower = -10; /* lower limit of temperature scale */
  upper = 150; /* upper limit */
  step = 10;   /* step size */

  celsius = lower;
  while (celsius <= upper) {
    fahr = (9.0 / 5.0) * celsius + 32.0;
    printf("%3.0f %6.1f\n", celsius, fahr);
    celsius = celsius + step;
  }
}
