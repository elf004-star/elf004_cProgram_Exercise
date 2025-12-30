#include <stdint.h>
#include <stdio.h>

float Q_rsqrt(float number) {
    union {
        float f;
        uint32_t i;
    } conv = {.f = number};
    conv.i = 0x5f3759df - (conv.i >> 1);
    float y = conv.f;
    y = y * (1.5f - (number * 0.5f * y * y));
    return y;
}

int main(void) {
    printf("Testing Q_rsqrt:\n");
    printf("1/sqrt(1) = %f\n", Q_rsqrt(1.0f));
    printf("1/sqrt(2) = %f\n", Q_rsqrt(2.0f));
    printf("1/sqrt(4) = %f\n", Q_rsqrt(4.0f));
    printf("1/sqrt(9) = %f\n", Q_rsqrt(9.0f));
    return 0;
}
