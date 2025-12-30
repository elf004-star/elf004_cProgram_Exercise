#include <stdio.h>

int main(void) {
    char grade;

    printf("Input a char: ");
    scanf("%c", &grade);

    if (grade == 'A' || grade == 'a') {
        printf("%c: excellent\n", grade);
    } else if (grade == 'B' || grade == 'b') {
        printf("%c: very good\n", grade);
    } else if (grade == 'C' || grade == 'c') {
        printf("%c: nice\n", grade);
    } else if (grade == 'D' || grade == 'd') {
        printf("%c: OK\n", grade);
    } else if (grade == 'E' || grade == 'e') {
        printf("%c: excellent\n", grade);
    } else {
        printf("Invalid char!");
    }

    return 0;
}
