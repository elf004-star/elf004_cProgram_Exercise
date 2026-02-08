#include <stdio.h>

void delete_function(char mychararray[]);
int main(void) {
    char testchar[] = "abcd ABCD 123";
    printf("%s\n", testchar);

    delete_function(testchar);
    printf("%s\n", testchar);

    return 0;
}

void delete_function(char mychararray[]) {
    char *p = mychararray;
    char *q = mychararray;

    while (*p != '\0') {
        if (*p == ' ') {
            q = p;
            while (*q != '\0') {
                *q = *(q + 1);
                q++;
            }
        }
        p++;
    }
}
