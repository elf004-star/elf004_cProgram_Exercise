#include <stdio.h>

int judge_prime(int num);

int main(void) {
    long testnum = 0;
    long primenum = 0;
    printf("Input a number: ");
    scanf("%ld", &testnum);

    for (long i = 2; i <= testnum; i++) {
        if (judge_prime(i)) {
            printf("%ld is prime.\n", i);
            primenum++;
        } else {
            printf("%ld is not prime.\n", i);
        }
    }

    return 0;
}

int judge_prime(int num) {
    int i;
    for (i = 2; i < num; i++) {
        if (num % i == 0) {
            return 0;
        }
    }
    if (i >= num) {
        return 1;
    }

    return 0;
}
