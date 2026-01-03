#include <stdio.h>
#define SIZE 8

int query(char arr[], int length, int subscript);

int main(void) {
    char myarr[SIZE] = {'\0', 'A', 'B', 'C', 'D', 'E', 'F', 'G'};
    int sub = 0;
    int result_query = 0;

    printf("Input subscript (<%d): ", SIZE - 1);
    scanf("%d", &sub);

    if (sub > SIZE - 1) {
        printf("(%d)Invalid input!\n", sub);
        return 0;
    }

    result_query = query(myarr, SIZE, sub);

    switch (result_query) {
    case 0:
        printf("The node has not children.\n");
        break;
    case 1:
        printf("The node has a child.\n");
        break;
    case 2:
        printf("The node has two children.\n");
        break;
    default:
        printf("BUG!\n");
        break;
    }

    return 0;
}

int query(char arr[], int length, int subscript) {
    if (2 * subscript <= length) {
        printf("Left Child is %c\n", arr[2 * subscript]);
        if (2 * subscript + 1 <= length) {
            printf("Right Child is %c\n", arr[2 * subscript + 1]);
            return 2;
        } else {
            return 1;
        }
    } else {
        return 0;
    }
}
