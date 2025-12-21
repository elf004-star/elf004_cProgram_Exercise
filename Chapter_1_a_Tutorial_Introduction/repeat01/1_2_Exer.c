#include <stdio.h>

int main(void) {

  printf("test Backslash fllow with c, \c ,\n");

  return 0;
}

/********************************************
  Unkown escape sequence '\c'

  cc1.exe: fatal error: ...: No such file or directory
  compilation terminated.
  *******************************************/
