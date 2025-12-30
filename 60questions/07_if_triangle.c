#include <stdio.h>

int main(void) {
    float a, b, c;
    a = b = c = 0;

    printf("Input three number: ");
    scanf("%f%f%f", &a, &b, &c);

    if (a + b > c && a + c > b && b + c > a) {
        if (a == b && b == c) {
            printf("Equilateral triangle!\n");
        } else {
            if ((a == b || b == c || c == a) &&
                (a * a == b * b + c * c || b * b == a * a + b * b || c * c == b * b + a * a)) {
                printf("Isosceles right triangle!\n");
            } else if (a == b || b == c || c == a) {
                printf("Isoscelse triangle!\n");
            } else if (a * a == b * b + c * c || b * b == a * a + b * b || c * c == b * b + a * a) {
                printf("Right triangle!\n");
            } else {
                printf("Ordinary triangle!\n");
            }
        }
    } else {
        printf("Not a triangle!\n");
    }

    return 0;
}
