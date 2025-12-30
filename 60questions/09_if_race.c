#include <stdio.h>

int main(void) {
    int score;
    char sex;

    printf("Input score and sex (M or W): ");
    scanf("%d%c", &score, &sex);

    if (score >= 8) {
        if (sex == 'M') {
            printf("M: %d\n", score);
        } else if (sex == 'W') {
            printf("W: %d\n", score);
        } else {
            printf("Invalid sex!\n");
        }
    } else {
        printf("Fail!");
    }

    return 0;
}
