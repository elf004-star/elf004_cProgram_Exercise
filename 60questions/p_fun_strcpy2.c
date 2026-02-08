#include <stdio.h>

char *my_strcopy(char *dest, const char *src);
int main(void) {
    char s1[100];
    char s2[100];
    char *s3 = "welcome";

    my_strcopy(s1, my_strcopy(s2, s3));
    puts(s1);
    puts(s2);
    puts(s3);

    return 0;
}

char *my_strcopy(char *dest, const char *src) {
    char *temp = dest;

    while (*src != '\0') {
        *dest = *src;
        dest++;
        src++;
    }
    *dest = '\0';

    return temp;
}
