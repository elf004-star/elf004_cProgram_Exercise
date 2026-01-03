#include <stdio.h>

int judge_even(int num);

// main function to print even number from 50 to 100, and print total number.
int main(void) {

    int start_num = 50;
    int end_num = 100;
    int sum = 0;

    for (int i = start_num; i <= end_num; i++) {
        if (judge_even(i) == 1) {
            printf("%d ", i);
            sum++;
        }
    }

    printf("\nTotal even number from %d to %d is %d.\n", start_num, end_num, sum);

    return 0;
}

// judge the number if even, even return 1.
int judge_even(int num) {
    if (num < 0) {
        return 0;
    }
    if (num % 2 != 0) {
        return 1;
    } else {
        return 0;
    }
}
