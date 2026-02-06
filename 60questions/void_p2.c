#include <stdio.h>

int main() {
    int a[] = {1, 2, 3, 5, 10, 9};
    void *p = a;
    int i;

    for (i = 0; i < sizeof(a) / sizeof(int); i++) {
        printf("%d\n", *((int *)p + i));
    }
    return 0;
}
