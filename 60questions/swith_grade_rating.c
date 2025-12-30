#include <stdio.h>

int main(void) {
    char grade_rating;
    printf("Input grade_rating: ");
    scanf("%c", &grade_rating);

    switch (grade_rating) {
    case 'A':
        printf("%c-excellent\n", grade_rating);
        break;
    case 'B':
        printf("%c-very good\n", grade_rating);
        break;
    case 'C':
        printf("%c-nice\n", grade_rating);
        break;
    case 'D':
        printf("%c-OK\n", grade_rating);
        break;
    case 'E':
        printf("%c-common\n", grade_rating);
        break;
    default:
        printf("Invalide input\n");
        break;
    }
    printf("************************\n");

    return 0;
}
