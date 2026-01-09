#include <stdio.h>

int prime_judge(int number);

int main(void) {
    int mynum = 0;
    int i = 3;
    long sum = 2;
    int count = 1;

    printf("Input number (int): ");
    scanf("%d", &mynum);

    if (mynum < 2) {
        printf("Input a number <= 2!\n");
        return -1;
    }

    while (i <= mynum) {
        if (prime_judge(i)) {
            printf("%d\n", i);
            count++;
            sum += i;
        }
        i++;
        i++;
    }

    printf("The sum of primes form 1 to %d is %ld\nThe total number is %d\n", mynum, sum, count);

    return 0;
}

int prime_judge(int number) {
    if (number % 2 == 0) {
        return 0;
    }
    int i = 3;
    while (i < number) {
        if (number % i == 0) {
            return 0;
        }
        i++;
        i++;
    }
    return 1;
}
