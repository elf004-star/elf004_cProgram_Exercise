#include <stdio.h>

int main(void) {
    long a, b, c, myjudge, divisor_ret, mutiple_ret;
    a = b = c = myjudge = mutiple_ret = 0;

    printf("Input two number (divided with space.): ");
    scanf("%ld%ld", &a, &b);

    if (a < b) {
        c = a;
        a = b;
        b = c;
    }

    long tem_a, tem_b;
    tem_a = a;
    tem_b = b;

    while ((myjudge = tem_a % tem_b) != 0) {
        tem_a = tem_b;
        tem_b = myjudge;
    }

    divisor_ret = tem_b;
    mutiple_ret = a * b / divisor_ret;

    printf("You input two number: %ld %ld\nThe divisor is: %ld\nThe mutiple is: %ld\n", a, b, divisor_ret, mutiple_ret);

    return 0;
}
