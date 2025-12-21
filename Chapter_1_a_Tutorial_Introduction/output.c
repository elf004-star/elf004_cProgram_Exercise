

#include <stdio.h>

#define MAXLINE 20

int mygetline(char s[], int lim);
void mycopy(char to[], char from[]);

int main(void) {
  char line[MAXLINE];
  char longest[MAXLINE] = {0};
  char temp[MAXLINE];

  int lengthline = 0;
  int maxleng = 0;
  int getstatus = 0;
  int totalw = 0;

  while ((lengthline = mygetline(line, MAXLINE)) > 0) {
    if (getstatus == 1) {

      totalw = totalw + lengthline;
    } else {

      mycopy(temp, line);
      totalw = lengthline;
    }

    if (line[lengthline - 1] != '\n') {
      getstatus = 1;
    } else {
      getstatus = 0;
    }

    if (totalw > maxleng && getstatus == 0) {
      maxleng = totalw;
      mycopy(longest, temp);
    }
  }

  printf("%s\n", longest);
  printf("len = %d\n", maxleng);

  return 0;
}

int mygetline(char s[], int lim) {
  int i;
  int c;

  for (i = 0; i < (lim - 1) && ((c = getchar()) != EOF && c != '\n'); ++i) {
    s[i] = c;
  }

  if (c == '\n') {
    s[i] = c;
    ++i;
  }

  else if (c == EOF && i > 0) {
    s[i] = '\n';
    ++i;
  }

  s[i] = '\0';

  return i;
}

void mycopy(char to[], char from[]) {
  int i;
  i = 0;

  while ((to[i] = from[i]) != '\0') {
    i++;
  }
}
