#include <stdio.h>
#define MAX 10

int main(void) {
    int myarray[MAX] = {0};
    int i = 0;

    while (i < MAX) {
        printf("Input %d/%d number: ", i + 1, MAX);
        if (scanf("%d", &myarray[i]) == 0) {
            getchar();
            continue;
        }
        i++;
    }

    printf("Sequential output: ");
    for (i = 0; i < MAX; i++) {
        printf("%d ", myarray[i]);
    }
    printf("\n");

    printf("Reverse order output: ");
    for (i = MAX - 1; i >= 0; i--) {
        printf("%d ", myarray[i]);
    }
    printf("\n");

    return 0;
}
