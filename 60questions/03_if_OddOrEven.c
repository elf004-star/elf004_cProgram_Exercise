#include <stdio.h>

int main() {
    int num = 0;

    printf("Input a number: ");
    scanf("%d", &num);

    if (num % 2 == 0) {
        printf("%d is odd number!\n", num);
    } else {
        printf("%d is even number!\n", num);
    }

    return 0;
}
