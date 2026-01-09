#include <stdio.h>
#define MAX 10

int main(void) {
    int myarray[MAX] = {0};
    int positive_num = 0;
    int negative_num = 0;
    int count_zero = 0;

    int i = 0;

    while (i < MAX) {
        printf("Input %d/%d number: ", i + 1, MAX);
        if (scanf("%d", &myarray[i]) == 0) {
            getchar();
            continue;
        }
        i++;
    }

    for (i = 0; i < MAX; i++) {
        if (myarray[i] > 0) {
            positive_num++;
        }
        if (myarray[i] < 0) {
            negative_num++;
        }
        if (myarray[i] == 0) {
            count_zero++;
        }
    }

    printf("Positive number: %d\nNegative number: %d\nZero: %d\n", positive_num, negative_num, count_zero);

    return 0;
}
