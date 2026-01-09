#include <stdio.h>
#define MAX 10

int main(void) {
    int i = 0;
    long maxnum = 0;

    int myarry[MAX] = {0};
    while (i < MAX) {
        printf("%d: Input 10 number: ", i + 1);
        if (scanf("%d", &myarry[i]) == 0) {
            getchar();
            continue;
        }
        if (myarry[i] > maxnum) {
            maxnum = myarry[i];
        }
        i++;
    }
    printf("%ld\n", maxnum);

    return 0;
}
