#include <stdio.h>

int main(void) {
    unsigned int test_num = 0x12345678;
    // print original version.
    printf("test number: %d\n", test_num);
    // print hexadeciaml version.
    printf("Hexadeciaml: %#x\n", test_num);
    // print first byte.
    char *p = (char *)&test_num;
    printf("%p first byte (hexadeciaml): %#x\n", (void *)p, *p);

    int n = sizeof(test_num) / sizeof(char);
    for (int i = 0; i < n; i++) {
        printf("%#x at %p\n", p[i], (void *)(p + i));
    }

    return 0;
}
