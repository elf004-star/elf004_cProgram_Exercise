#include <stdio.h>
#define MAXLEN 5

int search(int arr[], int length, int key);
void mydelete(int arr[], int length, int element);
// void insert(int arr[], int length, int len_real, int element, int pos);

int main(void) {
    int test_ar[MAXLEN] = {1, 5, 10, 7, 31};
    int i, element;

    element = 0;

    printf("Before: ");
    for (i = 0; i < MAXLEN; ++i) {
        printf("%d ", test_ar[i]);
    }
    printf("\n");

    // Get element and position.
    printf("Input one number: ");
    scanf("%d", &element);

    mydelete(test_ar, MAXLEN, element);

    // Show the result.
    printf("After delete %d: ", element);
    for (i = 0; i < MAXLEN; ++i) {
        printf("%d ", test_ar[i]);
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

// a delete function to delete element of array
void mydelete(int arr[], int length, int element) {
    int location = 0;
    int i;

    location = search(arr, length, element);
    if (location == -1) {
        printf("The number %d is not in the array!\n", element);
    } else {
        for (i = location; i < length - 1; ++i) {
            arr[i] = arr[i + 1];
        }

        arr[i] = 0;
    }
}

// a insert function to insert an element
// void insert(int arr[], int length, int len_real, int element, int pos) {
//   int i;
//
//   if (pos + 1 > length) {
//     printf("Invalid subscript (too big subscript), but I have already fixed "
//            "them!\n");
//     pos = length - 1;
//   }
//   if (pos < 0) {
//     printf("Invalid subscript (negative subscript), but I have already fixed
//     "
//            "them!\n");
//     pos = 0;
//   }
//   for (i = len_real - 1; i >= pos; --i) {
//     arr[i + 1] = arr[i];
//   }
//
//   arr[pos] = element;
// }
