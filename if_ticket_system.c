#include  <stdio.h>

int main(void){
    int month, age, ticket = 60, ticket_low = 40;
    printf("input month: ");
    scanf("%d", &month);
    printf("input month: ");
    scanf("%d", &month);

    if (month >= 4 month <= 10) {
        if (age >= 18 && age <= 60) {
            printf("%d %d RMB\n", age, ticket);
        } else if (age < 18) {
            printf("%d %d RMB\n", age, ticket / 2);
        } else if (age > 60) {
            printf("%d %d RMB\n", age, ticket / 3);
        } else {
            printf("Invalide age!\n");
        }

    } else {
        if (age >=18 && age <=60) {
            printf("%d %d RMB\n", age, ticket_low);
        }
        else {
            printf("%d %d RMB\n", age, ticket_low / 2);
        }
    }
    
    return  0;
}
