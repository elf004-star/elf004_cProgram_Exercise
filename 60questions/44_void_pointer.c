#include <stdio.h>
#define MAX 6

int main(void) {
    int testarray[MAX] = {1, 3, 4, 5, 6};
    int *p[MAX];

    for (int i = 0; i < MAX; i++) {
        p[i] = &testarray[i];
    }

    for (int i = 0; i < MAX; i++) {
        printf("%d ", *p[i]);
    }
    printf("\n");

    return 0;
}
