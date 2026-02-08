#include <stdio.h>

void sequence_function(int myarray[], int mysize);
void reverse_order(int myarray[], int mysize);
int main(void) {
    int testarray[] = {1, 1, 2, 3, 4, 3, 2, 1, 0};
    int testsize = sizeof(testarray) / sizeof(int);

    printf("the testsize is: %d\n", testsize);

    for (int i = 0; i < testsize; i++) {
        printf("%d ", testarray[i]);
    }
    printf("\n");

    sequence_function(testarray, testsize);

    printf("sequence order: ");
    for (int i = 0; i < testsize; i++) {
        printf("%d ", testarray[i]);
    }
    printf("\n");

    reverse_order(testarray, testsize);
    printf("reverse order: ");
    for (int i = 0; i < testsize; i++) {
        printf("%d ", testarray[i]);
    }
    printf("\n");

    return 0;
}

void sequence_function(int myarray[], int mysize) {
    int temp = myarray[0];
    for (int i = mysize - 1; i >= 0; i--) {
        for (int j = 0; j < i; j++) {
            if (myarray[j] <= myarray[j + 1]) {
                temp = myarray[j];
                myarray[j] = myarray[j + 1];
                myarray[j + 1] = temp;
            }
        }
    }
}

void reverse_order(int myarray[], int mysize) {
    int temp = myarray[0];
    for (int i = mysize - 1; i >= 0; i--) {
        for (int j = 0; j < i; j++) {
            if (myarray[j] >= myarray[j + 1]) {
                temp = myarray[j];
                myarray[j] = myarray[j + 1];
                myarray[j + 1] = temp;
            }
        }
    }
}
