#include <stdio.h>

int cuntchar(char mychar[]);

int main() {
    char testchar[] = "abcdABCD";

    printf("origin testchar: %s\n", testchar);

    printf("%d\n", cuntchar(testchar));

    printf("transformer testchar: %s\n", testchar);

    return 0;
}

int cuntchar(char mychar[]) {
    char *p = mychar;
    int count = 0;

    while (*p != '\0') {
        count++;
        if (*p >= 'a' && *p <= 'z') {
            *p = *p - ('a' - 'A');
        }
        p++;
    }
    return count;
}
