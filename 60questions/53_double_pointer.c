#include <stdio.h>

void print_double(int myarray[][4], int m, int n);

int calculate_odd(int **a, int m, int n);

int main(void) {
    int testarray[][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}, {13, 14, 15, 16}};
    int *p[] = {testarray[0], testarray[1], testarray[2], testarray[3]};

    print_double(testarray, 4, 4);

    printf("The odd number: %d\n", calculate_odd(p, 4, 4));

    return 0;
}

void print_double(int myarray[][4], int m, int n) {
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d\t", myarray[i][j]);
        }
        printf("\n");
    }
}

int calculate_odd(int **a, int m, int n) {
    int count = 0;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (a[i][j] % 2 != 0) {
                count++;
            }
        }
    }
    return count;
}
