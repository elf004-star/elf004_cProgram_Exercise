#include <stdio.h>

int main(void) {
    int num, sum, count, ret;

    sum = 0;
    count = 0;

    printf("input: ");
    while ((ret = scanf("%d", &num)) == 1) {
        sum += num;
        if (num % 2 == 0) {
            count++;
        }
        printf("input: ");
    }
    printf("sum = %d count = %d\n", sum, count);
    return 0;
}
