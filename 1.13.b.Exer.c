#include <stdio.h>

#define MAXWORDLEN 10

int main(void) {
  int c;
  int inspace = 0;
  long lengtharr[MAXWORDLEN + 1];
  int wordlen = 0;
  int firstletter = 1;
  long thisval = 0;
  long maxval = 0;
  int thisidx = 0;
  int done = 0;

  // 初始化长度数组
  for (thisidx = 0; thisidx <= MAXWORDLEN; thisidx++) {
    lengtharr[thisidx] = 0;
  }

  // 统计单词长度
  while (done == 0) {
    c = getchar();

    if (c == ' ' || c == '\t' || c == '\n' || c == EOF) {
      if (inspace == 0) {
        firstletter = 0;
        inspace = 1;

        if (wordlen <= MAXWORDLEN) {
          if (wordlen > 0) {
            thisval = ++lengtharr[wordlen - 1];
            if (thisval > maxval) {
              maxval = thisval;
            }
          }
        } else {
          thisval = ++lengtharr[MAXWORDLEN];
          if (thisval > maxval) {
            maxval = thisval;
          }
        }
      }

      if (c == EOF) {
        done = 1;
      }
    } else {
      if (inspace == 1 || firstletter == 1) {
        wordlen = 0;
        firstletter = 0;
        inspace = 0;
      }
      ++wordlen;
    }
  }

  // 打印垂直直方图
  for (thisval = maxval; thisval > 0; thisval--) {
    printf("%4ld | ", thisval);
    for (thisidx = 0; thisidx <= MAXWORDLEN; thisidx++) {
      if (lengtharr[thisidx] >= thisval) {
        printf("* ");
      } else {
        printf("  ");
      }
    }
    printf("\n");
  }

  // 打印底部标签
  printf("      +");
  for (thisidx = 0; thisidx <= MAXWORDLEN; thisidx++) {
    printf("--");
  }
  printf("\n      ");

  for (thisidx = 0; thisidx < MAXWORDLEN; thisidx++) {
    printf("%2d", thisidx + 1);
  }
  printf(">%d\n", MAXWORDLEN);

  return 0;
}
