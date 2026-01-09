#include <stdio.h>

int main(void) {
    int mynum = 0;
    long mysum = 0;
    int totalnum = 0;

    printf("Input int number: ");
    scanf("%d", &mynum);

    while (mynum != 0) {
        mysum = mysum + mynum;
        if (mynum % 2 == 0) {
            totalnum++;
        }
        printf("Input int number: ");
        scanf("%d", &mynum);
    }
    printf("The sum = %ld, tatal odd number: %d\n", mysum, totalnum);

    return 0;
}
