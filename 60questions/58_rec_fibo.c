#include <stdio.h>

long calculate(int n);
int main(void) {
    int innum = 0;
    printf("Input a number: ");
    scanf("%d", &innum);

    printf("n = %d\n", innum);

    printf("Fibonacci(%d) = %ld\n", innum, calculate(innum));

    for (int i = 1; i <= innum; i++) {
        printf("Fibonacci(%d) = %ld\n", i, calculate(i));
    }

    return 0;
}
long calculate(int n) {
    if (n <= 2) {
        return 1;
    }
    return calculate(n - 2) + calculate(n - 1);
}
