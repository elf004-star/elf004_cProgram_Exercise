#include <stdio.h>

int main() {
    int num;

    printf("input a num:");
    scanf("%d", &num);
    if (num % 2 == 0) {
        printf("%d is odd number\n", num);
    }

    printf("%d\n", num);
    return 0;
}
