
#include <stdio.h>
#define MAX 10

int main(void) {
    int myarray[MAX] = {0};
    int i = 0;
    int *p = NULL;
    int *q = NULL;
    int temp_num = 0;

    p = myarray;
    q = p + sizeof(myarray) / sizeof(int) - 1;

    // scanf array.
    while (i < MAX) {
        printf("Input %d/%d number: ", i + 1, MAX);
        if (scanf("%d", &myarray[i]) == 0) {
            getchar();
            continue;
        }
        i++;
    }

    // Print original order.
    printf("Sequential output: ");
    for (i = 0; i < MAX; i++) {
        printf("%d ", myarray[i]);
    }
    printf("\n");

    // Calculate reverse order.
    while (p < q) {
        temp_num = *p;
        *p = *q;
        *q = temp_num;
        p++;
        q--;
    }
    // print reverse order.
    printf("Reverse order: ");
    for (i = 0; i < MAX; i++) {
        printf("%d ", myarray[i]);
    }
    printf("\n");

    return 0;
}
