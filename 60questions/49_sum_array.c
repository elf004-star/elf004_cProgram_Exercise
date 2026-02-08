#include <stdio.h>

long calculate_function(int mychar[], int mysize);
int main(void) {
    int testarray[] = {1, 2, 3, 4, 5, 6};
    int testsize = sizeof(testarray) / sizeof(int);

    printf("The size of testarray: %d\n", testsize);

    printf("The sum of testarray: %ld\n", calculate_function(testarray, testsize));

    return 0;
}

long calculate_function(int mychar[], int mysize) {
    long sum = 0;

    for (int i = 0; i < mysize; i++) {
        sum += mychar[i];
    }

    return sum;
}
