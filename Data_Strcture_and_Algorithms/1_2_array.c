#include <stdio.h>
#define MAXLEN 5

int search(int arr[], int length, int key);

int main(void) {
    int test_ar[MAXLEN];
    int i, key, location;

    key = location = 0;
    // key = 10; // KEY can be set

    printf("Input a number: ");
    scanf("%d", &key);

    for (i = 0; i < MAXLEN; ++i) {
        test_ar[i] = 0;
    }

    test_ar[0] = 1;
    test_ar[1] = 5;
    test_ar[2] = 10;
    test_ar[3] = 7;
    test_ar[4] = 31;

    location = search(test_ar, MAXLEN, key) + 1;

    if (location != 0) {
        printf("%d is at %d\n", key, location);
    } else {
        printf("%d is not at the array\n", key);
    }

    return 0;
}

// a search function to find key's subscript
int search(int arr[], int length, int key) {
    int i;

    for (i = 0; i < length; ++i) {
        if (key == arr[i]) {
            return i;
        }
    }

    return -1;
}
