#include <stdio.h>

#define MASS 3.0E-23
#define QUART 950

double calculate_molecule(int water_amount);
int main(void) {
    int input_num = 0;
    printf("Enter the amount of water in quarts: ");
    scanf("%d", &input_num);

    printf("There are %0.2e water molecules.\n", calculate_molecule(input_num));

    return 0;
}
double calculate_molecule(int water_amount) {
    return water_amount * QUART / MASS;
}
