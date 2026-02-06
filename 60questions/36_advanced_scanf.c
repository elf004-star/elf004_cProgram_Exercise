#include <stdio.h>

int main(void) {
    char char_array[80];
    printf("Input character string: ");
    scanf("%[^\n]", char_array);

    printf("%s\n", char_array);

    return 0;
}
