#include <stdio.h>

int main(void) {
    int score = 0;

    printf("Input your score: ");
    scanf("%d", &score);

    if (score < 0) {
        printf("%d: Invalid input!\n", score);
        return 0;
    }

    switch (score / 10) {
    case (10):
        printf("%d: A\n", score);
        break;
    case (9):
        printf("%d: A\n", score);
        break;
    case (8):
        printf("%d: B\n", score);
        break;
    case (7):
        printf("%d: C\n", score);
        break;
    case (6):
        printf("%d: D\n", score);
        break;
    default:
        printf("%d: E\n", score);
    }

    return 0;
}
