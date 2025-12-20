#include <stdio.h>

int main(void) {
    int num;
    printf("Input a number: ");
    scanf("%d", &num);

    if (num % 2 == 0) {
        printf("%d is an odd number\n", num);
    } else {
        printf("%d is a even number\n", num);
    }


    return 0;
}
