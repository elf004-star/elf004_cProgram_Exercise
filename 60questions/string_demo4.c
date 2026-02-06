#include <stdio.h>

int main(void) {
    char dest[100] = {"abc"}; //"abcdef"
    char *src = "def";
    char *p = dest;
    char *q = src;
    while (*p != '\0') {
        p++;
    }
    while (*q != '\0') {
        *p = *q;
        p++;
        q++;
    }
    *p = '\0';
    printf("src: %s\n", src);
    printf("dest: %s\n", dest);
    return 0;
}
