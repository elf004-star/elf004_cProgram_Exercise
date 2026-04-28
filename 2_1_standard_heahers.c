#include <float.h>
#include <limits.h>
#include <stdio.h>

int main() {
    printf("Ranges from standard headers: \n");
    printf("==============================\n");

    // char types
    printf("char: \n");
    printf("  Signed char: %d to %d\n", SCHAR_MIN, SCHAR_MAX);
    printf("  Unsigned char: 0 to %u\n", UCHAR_MAX);

    // short types
    printf("\nshort:\n");
    printf("  Signed short: %d to %d\n", SHRT_MIN, SHRT_MAX);
    printf("  Unsigned short: 0 to %u\n", USHRT_MAX);

    // int types
    printf("\nint:\n");
    printf("  Signed int: %d to %d\n", INT_MIN, INT_MAX);
    printf("  Unsigned int: 0 to %u\n", UINT_MAX);

    // long types
    printf("\nlong:\n");
    printf("  Signed long: %ld to %ld\n", LONG_MIN, LONG_MAX);
    printf("  Unsigned long: 0 to %lu\n", ULONG_MAX);

    // floating-point types
    printf("\nfloat:\n");
    printf("  Range: %e to %e\n", FLT_MIN, FLT_MAX);
    printf("  Precision: %d decimal digits\n", FLT_DIG);

    printf("\ndouble:\n");
    printf("  Range: %e to %e\n", DBL_MIN, DBL_MAX);
    printf("  Precision: %d decimal digits\n", DBL_DIG);

    return 0;
}
