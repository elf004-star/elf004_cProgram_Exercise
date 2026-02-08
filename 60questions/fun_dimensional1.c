#include <stdio.h>

void print_array(int *a, int m, int n);
int main(void) {
    int a[3][4] = {{1, 5, 4, 2}, {3, 6, 9, 8}, {2, 5, 9, 6}};
    print_array(a[0], 3, 4);

    return 0;
}

void print_array(int *a, int m, int n) {
    for (int i = 0; i < m * n; i++) {
        printf("%d ", a[i]);
    }
}
