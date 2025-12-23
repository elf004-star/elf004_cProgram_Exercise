#include <stdio.h>
/* Section 1.2 */
/* print Fahrenheit-Celsius table
     for fahr = 2, 20, ..., 300 */
int tableface(float fah); /* function prototype */
int main() {
    printf("Print Fahrenheit-Celsius table.\n");
    float fahr;
    float lower, upper, step;

    lower = 0;   /* lower limit of temperature scale */
    upper = 300; /* upper limit */
    step = 20;   /* step size */

    fahr = lower;
    while (fahr <= upper) {
        tableface(fahr);
        fahr = fahr + step;
    }

    return 0;
}

/* function to print Fahrenheit-Celsius table */
int tableface(float fah) {
    float celsius = 0;
    celsius = (5.0 / 9.0) * (fah - 32.0);
    printf("%3.0f %6.1f\n", fah, celsius);

    return 0;
}
