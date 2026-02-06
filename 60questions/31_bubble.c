#include <stdio.h>

int main(void) {
    int testarray[] = {1, 0, 1, 120, 110, 119, 911};
    int n = sizeof(testarray) / sizeof(int);
    int tempnum = testarray[0];

    printf("size = %d\n", n);

    for (int i = 0; i < n; i++) {
        printf("testarray[%d]: %d\n", i, testarray[i]);
    }
    // Reverse order
    for (int i = n - 1; i > 0; i--) {
        for (int j = 1; j <= i; j++) {
            if (testarray[j - 1] >= testarray[j]) {
                tempnum = testarray[j - 1];
                testarray[j - 1] = testarray[j];
                testarray[j] = tempnum;
            }
        }
    }

    printf("Reverse order\n");
    for (int i = 0; i < n; i++) {
        printf("testarray[%d]: %d\n", i, testarray[i]);
    }

    // Sequence order
    for (int i = n - 1; i > 0; i--) {
        for (int j = 1; j <= i; j++) {
            if (testarray[j - 1] <= testarray[j]) {
                tempnum = testarray[j - 1];
                testarray[j - 1] = testarray[j];
                testarray[j] = tempnum;
            }
        }
    }

    printf("Sequence order\n");
    for (int i = 0; i < n; i++) {
        printf("testarray[%d]: %d\n", i, testarray[i]);
    }

    return 0;
}
