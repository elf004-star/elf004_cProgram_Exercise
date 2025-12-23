#include <stdio.h>

int main() {
    float a, b, c;

    printf("Input a b c: ");
    scanf("%f%f%f", &a, &b, &c);

    if (a + b > c && b + c > a && c + a > b) {
        if (a == b && b == c) {
            printf("This is a equilateral triangle.\n");
        } else {
            printf("This is a ordinary triangle.\n");
        }
    } else {
        printf("This is not a triangle.\n");
    }

    return 0;
}
