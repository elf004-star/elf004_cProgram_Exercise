#include <stdio.h>

long factorial(int num);

int main(void) {
    int testnum;

    printf("Input a number: ");
    scanf("%d", &testnum);

    printf("%d: The result is %ld.\n", testnum, factorial(testnum));

    return 0;
}

long factorial(int num) {
    if (num < 1) {
        return 1;
    }
    if (num == 1) {
        return 1;
    }
    return num * factorial(num - 1);
}
