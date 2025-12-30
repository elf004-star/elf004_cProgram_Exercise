#include <stdio.h>

int main(void) {
    int month_num;
    int age_num;

    printf("Input the month: ");
    scanf("%d", &month_num);
    getchar();

    printf("Input the age: ");
    scanf("%d", &age_num);

    if (month_num >= 1 && month_num <= 12 && age_num > 0) {
        if (month_num >= 4 && month_num <= 10) {
            if (age_num > 60) {
                printf("20 yuan\n");
            } else if (age_num >= 18) {
                printf("60 yuan\n");
            } else {
                printf("30 yuan\n");
            }
        } else {
            if (age_num >= 18 && age_num <= 60) {
                printf("40 yuan\n");
            } else {
                printf("20 yuan\n");
            }
        }
    } else {
        printf("Invalide month or age!\n");
    }

    return 0;
}
