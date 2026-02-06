#include <stdio.h>

int main(void) {
    unsigned int a = 0x12345678;
    char *p = (char *)&a;
    // print original version.
    printf("%d\n", a);
    // print  hexadecimal version.
    printf("%#x\n", a);
    // print first byte version.
    printf("%#x\n", *p);

    return 0;
}
