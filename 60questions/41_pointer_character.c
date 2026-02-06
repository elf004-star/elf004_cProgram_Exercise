#include <stdio.h>
#define MAXNUM 60
#define DISTANCE 'A' - 'a'

int main(void) {
    char test_string[MAXNUM] = {};
    printf("Input character string: ");
    scanf("%[^\n]", test_string);

    printf("Original version\n");
    // for (int i = 0; i < MAXNUM; i++) {
    //     printf("%d: %d ", i, test_string[i]);
    // }
    printf("%s\n", test_string);

    for (int i = 0; i < MAXNUM; i++) {
        if (test_string[i] >= 'a' && test_string[i] <= 'z') {
            test_string[i] += DISTANCE;
        } else if (test_string[i] >= 'A' && test_string[i] <= 'Z') {
            test_string[i] -= DISTANCE;
        }
    }

    printf("Convert version\n");
    // for (int i = 0; i < MAXNUM; i++) {
    //     printf("%d: %d ", i, test_string[i]);
    // }
    printf("%s\n", test_string);

    return 0;
}
