#include <stdio.h>
#include <stdlib.h>

int compar(const void *p1, const void *p2);
int main(void) {
    int a[] = {56, 23, 1, 6, 9, 25};
    int n = sizeof(a) / sizeof(int);
    int i;

    qsort(a, n, sizeof(int), compar);

    for (i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }

    putchar('\n');

    return 0;
}

int compar(const void *p1, const void *p2) {
    return *(int *)p1 - *(int *)p2;
}
