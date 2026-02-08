#include <stdio.h>

long calculate(int n);
int main(void) {
    int innum = 0;
    printf("Input a number: ");
    scanf("%d", &innum);

    printf("n = %d\n", innum);

    printf("n! = %ld\n", calculate(innum));

    return 0;
}
long calculate(int n) {
    if (n <= 1) {
        return 1;
    }
    return n * calculate(n - 1);
}
