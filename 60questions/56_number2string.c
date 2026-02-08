#include <stdio.h>

int num2str(int mynum, char *s);
long prime10(int timenum);

int main(void) {
    int testnum = 123;
    char teststr[100] = "";

    printf("origin teststr: %s\n", teststr);

    num2str(testnum, teststr);

    printf("after transformer: %s\n", teststr);

    return 0;
}

int num2str(int mynum, char *s) {
    int tempnum = 0;
    int justice = 0;

    for (int i = 4; i > 0; i--) {
        if ((tempnum = mynum / prime10(i)) != 0 || justice != 0) {
            justice++;
            *s = tempnum + '0';
            mynum = mynum % prime10(i);
            s++;
        }
    }
    *s = mynum + '0';
    *(s + 1) = '\0';
    return justice;
}

long prime10(int timenum) {
    long calculate = 1;
    for (int i = 0; i < timenum; i++) {
        calculate *= 10;
    }
    return calculate;
}
