#include <stdio.h>

int month_day(int year, int month);

int main(void) {
    int year, month, day, sumday;
    year = month = day = sumday = 0;

    printf("Input year, month and day (split wiht space): ");
    scanf("%d%d%d", &year, &month, &day);

    for (int i = 1; i < month; i++) {
        sumday = sumday + month_day(year, i);
    }

    sumday = sumday + day;

    printf("%d/%d/%d has tataly %d days\n", day, month, year, sumday);
    printf("%d-%d-%d has tataly %d days\n", year, month, day, sumday);

    return 0;
}

int month_day(int year, int month) {

    int day = 0;

    switch (month) {
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
        day = 31;
        break;
    case 4:
    case 6:
    case 9:
    case 11:
        day = 30;
        break;
    case 2:
        if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) {
            day = 29;
        } else {
            day = 28;
        }
        break;
    default:
        day = -1;
        break;
    }

    if (day != -1) {
        return day;
    } else {
        printf("Invalid month: %d\n", month);
        return 0;
    }
}
