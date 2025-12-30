#include <stdio.h>

int main() {
    float score;
    char gender;

    printf("Input score (second): ");
    scanf("%f", &score);
    getchar();

    if (score <= 8) {
        printf("Input gender: ");
        scanf("%c", &gender);
        if (gender == 'm') {
            printf("man's game\n");
        } else if (gender == 'w') {
            printf("woman's game\n");
        } else {
            printf("input invalide\n");
        }
    } else {
        printf("game over!\n");
    }

    return 0;
}
