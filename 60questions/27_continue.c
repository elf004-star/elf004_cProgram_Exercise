#include <stdio.h>

int main(void) {
    int myinput = 0;
    int i;

    while (1) {
        printf("Input a number: ");
        if (scanf("%d", &myinput) == 0) {
            getchar();
            continue;
        }

        for (i = 2; i < myinput; i++) {
            if (myinput % i == 0) {
                break;
            }
        }
        printf("i = %d.\n", i);
        if (i > myinput - 1) {
            printf("%d is prime.\n", myinput);
        } else {
            printf("%d is not prime.\n", myinput);
        }
    }

    return 0;
}
