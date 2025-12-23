#include <stdio.h>

#define MAX_SIZE 6

int main(void) {
    int arr[MAX_SIZE] = {1, 5, 10, 7, 31};
    int length = 5;
    int element = 52;
    int pos = 2;

    for (int i = length; i > pos; i--) {
        arr[i] = arr[i - 1];
    }

    arr[pos] = element;
    length = length + 1;

    return 0;
}
