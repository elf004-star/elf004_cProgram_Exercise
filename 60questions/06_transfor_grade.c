#include <stdio.h>

int main(void) {
    float grade;

    printf("Input a number (0-100): ");
    scanf("%f", &grade);

    if (grade >= 0 && grade <= 100) {
        if (grade >= 90) {
            printf("%0.2f is A score!\n", grade);
        } else if (grade >= 80) {
            printf("%0.2f is B score!\n", grade);
        } else if (grade >= 70) {
            printf("%0.2f is C score!\n", grade);
        } else if (grade >= 60) {
            printf("%0.2f is D score!\n", grade);
        } else {
            printf("%0.2f is E score!\n", grade);
        }
    } else {
        printf("Invalide input!\n");
    }

    return 0;
}
