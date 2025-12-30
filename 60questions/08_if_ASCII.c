#include <stdio.h>

int main(void) {
    char mychar;

    printf("Input a char: ");
    scanf("%c", &mychar);

    if (mychar <= 32) {
        printf("%c is a contral char!\n", mychar);
    } else if (mychar >= '0' && mychar <= '9') {
        printf("%c is a number!\n", mychar);
    } else if (mychar >= 'A' && mychar <= 'Z') {
        printf("%c is a Upper letter!\n", mychar);
    } else if (mychar >= 'a' && mychar <= 'z') {
        printf("%c is a Lower letter!\n", mychar);
    } else {
        printf("%c is belong other char!\n", mychar);
    }

    return 0;
}
