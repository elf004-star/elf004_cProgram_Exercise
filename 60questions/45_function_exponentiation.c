#include <stdio.h>
#define PRIME 2

double exponentiation(int truth);

int main(void) {
    float x = 0;

    printf("Input the X: ");
    scanf("%f", &x);

    if (PRIME < 1) {
        return 0;
    }

    printf("The result is %0.2f\n", exponentiation(x));

    return 0;
}

double exponentiation(int truth) {
    double ret = 1;

    for (int i = 1; i <= PRIME; i++) {
        ret = ret * truth;
    }
    return ret;
}
