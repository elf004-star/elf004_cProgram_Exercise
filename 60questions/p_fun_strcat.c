#include <stdio.h>

char *my_strcat(char *dest, const char *src);

int main() {
    char s1[100] = "ab";
    char s2[100] = "cd";
    char *s3 = "welcome";

    my_strcat(s1, my_strcat(s2, s3));

    puts(s1);
    puts(s2);
    puts(s3);

    return 0;
}

char *my_strcat(char *dest, const char *src) {
    char *temp = dest;
    while (*dest != '\0') {
        dest++;
    }
    while (*src != '\0') {
        *dest = *src;
        dest++;
        src++;
    }
    *dest = *src;
    return temp;
}
