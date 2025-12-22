#include <stdio.h>

int main(void) {
    int year;

    printf("Input year: ");
    scanf("%d", &year);

    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        printf("%d is a leap year!\n", year);
        printf("Feb has 29 days.\n");
    } else {
        printf("%d is not a leap year!\n", year);
        printf("Feb has 28 days.\n");
    }

    return 0;
}
