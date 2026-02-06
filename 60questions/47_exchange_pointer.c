#include <stdio.h>

void exchangef(int *anum, int *bnum);

int main(void) {
    int a = 10;
    int b = 20;

    printf("a = %d, b = %d\n", a, b);

    exchangef(&a, &b);

    printf("a = %d, b = %d\n", a, b);

    return 0;
}

void exchangef(int *anum, int *bnum) {
    int temp = 0;
    temp = *anum;
    *anum = *bnum;
    *bnum = temp;
    return;
}
