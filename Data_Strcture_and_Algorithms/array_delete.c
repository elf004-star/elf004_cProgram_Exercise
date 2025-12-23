#include <stdio.h>

int search(int arr[], int length, int key) {
    for (int i = 0; i < length; i++) {
        if (arr[i] == key) {
            return i;
        }
    }

    return -1;
}

int myremove(int arr[], int length, int key) {
    int index = search(arr, length, key);

    if (index == -1)
        return -1;

    for (int i = index; i < length - 1; i++) {
        arr[i] = arr[i + 1];
    }

    length = length - 1;
    return index;
}

int main(void) {
    int myarr[] = {1, 5, 10, 7, 31};
    int mylen = 5;
    int myele = 10;
    int myjudge = 0;

    myjudge = myremove(myarr, mylen, myele);

    printf("Myjudge = %d\n", myjudge);

    return 0;
}
