#include <stdio.h>

int cuntchar(char mychar[]);

int main() {
    char testchar[] = "abcdABCD123";

    printf("origin testchar: %s\n", testchar);

    printf("the number of testchar: %d\n", cuntchar(testchar));

    printf("transformer testchar: %s\n", testchar);

    return 0;
}

int cuntchar(char mychar[]) {
    char *p = mychar;
    int count = 0;

    while (*p != '\0') {
        if (*p >= 'a' && *p <= 'z') {
            count++;
            *p = *p - ('a' - 'A');
        } else if (*p >= 'A' && *p <= 'Z') {
            count++;
        }
        p++;
    }
    return count;
}
