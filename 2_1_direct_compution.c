#include <stdio.h>

int main(void) {
    printf("Ranges from direct computation:\n");
    printf("================================\n");
    // char types
    signed char schar_min, schar_max;
    unsigned char uchar_max;

    schar_max = (signed char)((unsigned char)~0 >> 1);
    schar_min = -(schar_max)-1;
    uchar_max = (unsigned char)~0;

    printf("char:\n");
    printf("  Signed char: %d to %d\n", schar_min, schar_max);
    printf("  Unsigned char: 0 to %u\n", uchar_max);

    // short types
    signed short sshort_min, sshort_max;
    unsigned short ushort_max;

    sshort_max = (signed short)((unsigned short)~0 >> 1);
    sshort_min = -(sshort_max)-1;
    ushort_max = (unsigned short)~0;

    printf("\nshort:\n");
    printf("  Signed short: %d to %d\n", sshort_min, sshort_max);
    printf("  Unsigned short: 0 to %u\n", ushort_max);

    // int types
    signed int sint_min, sint_max;
    unsigned int uint_max;

    sint_max = (signed int)((unsigned int)~0 >> 1);
    sint_min = -(sint_max)-1;
    uint_max = (unsigned int)~0;

    printf("\nint:\n");
    printf("  Signed int: %d to %d\n", sint_min, sint_max);
    printf("  Unsigned int: 0 to %u\n", uint_max);

    // long types
    signed long slong_min, slong_max;
    unsigned long ulong_max;

    slong_max = (signed long)((unsigned long)~0 >> 1);
    slong_min = -(slong_max)-1;
    ulong_max = (unsigned long)~0;

    printf("\nlong:\n");
    printf("  Signed long: %ld to %ld\n", slong_min, slong_max);
    printf("  Unsigned long: 0 to %lu\n", ulong_max);

    // Floating-point ranges (approximate computation)
    printf("\nfloat (approximate computation):\n");
    float f = 1.0;
    float f_min = 1.0;
    float f_max = 1.0;

    // Find minimum positive float
    while (f / 2 > 0) {
        f = f / 2;
        f_min = f;
    }

    // Find maximum float
    f = 1.0;
    while (f * 2 != 1.0 / 0.0) { // Check for infinity
        f = f * 2;
        f_max = f;
    }

    printf("  Approximate min positive: %e\n", f_min);
    printf("  Approximate max: %e\n", f_max);

    return 0;
}
