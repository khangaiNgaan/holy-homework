#include<stdio.h>

int main() {
  char ch;
  ch = getchar();
  if ((int)ch >= 48 && (int)ch <= 57) {
    putchar(ch);
  } else if ( ((int)ch >= 65 && (int)ch <= 90) || ((int)ch >= 97 && (int)ch <= 122) ) {
    printf("%d", ch);
  } else {
    printf("输入错误!\n");
  }
  return 0;
}
