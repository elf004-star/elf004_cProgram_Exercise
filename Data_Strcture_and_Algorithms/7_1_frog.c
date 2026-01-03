#include <stdio.h>

long frog(int num);

int main(void) {
    int testnum;

    printf("Input a number: ");
    scanf("%d", &testnum);

    printf("%d: The result is %ld.\n", testnum, frog(testnum));

    return 0;
}

long frog(int num) {
    if (num < 1) {
        return 0;
    }
    if (num == 1) {
        return 1;
    } else if (num == 2) {
        return 2;
    }
    return frog(num - 1) + frog(num - 2);
}
