#include <stdio.h>
#define MAXLEN 10

// int search(int arr[], int length, int key);
void insert(int arr[], int length, int len_real, int element, int pos);

int main(void) {
    int test_ar[MAXLEN] = {1, 5, 10, 7, 31};
    int i, element, location, pos_real, len_real;

    len_real = 5;
    element = location = pos_real = 0;

    printf("Before: ");
    for (i = 0; i < len_real; ++i) {
        printf("%d ", test_ar[i]);
    }
    printf("\n");

    // Get element and position.
    printf("Input two number (element pos_real): ");
    scanf("%d%d", &element, &pos_real);

    // Insert element.
    insert(test_ar, MAXLEN, len_real, element, pos_real - 1);

    // Show the result.
    printf("After insert: ");
    for (i = 0; i < len_real + 1; ++i) {
        printf("%d ", test_ar[i]);
    }

    // location = search(test_ar, MAXLEN, key) + 1;
    //
    // if (location != 0) {
    //   printf("%d is at %d\n", key, location);
    // } else {
    //   printf("%d is not at the array\n", key);
    // }

    return 0;
}

// // a search function to find key's subscript
// int search(int arr[], int length, int key) {
//   int i;
//
//   for (i = 0; i < length; ++i) {
//     if (key == arr[i]) {
//       return i;
//     }
//   }
//
//   return -1;
// }

// a insert function to insert an element
void insert(int arr[], int length, int len_real, int element, int pos) {
    int i;

    if (pos + 1 > length) {
        printf("Invalid subscript (too big subscript), but I have already fixed "
               "them!\n");
        pos = length - 1;
    }
    if (pos < 0) {
        printf("Invalid subscript (negative subscript), but I have already fixed "
               "them!\n");
        pos = 0;
    }
    for (i = len_real - 1; i >= pos; --i) {
        arr[i + 1] = arr[i];
    }

    arr[pos] = element;
}
