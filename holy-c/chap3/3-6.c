#include<stdio.h>

int main() {
  char c1 = getchar();
  char c2 = getchar();
  printf("用putchar输出语句:");
  putchar(c1);
  putchar(c2);
  printf("\n用printf输出语句:%c%c", c1, c2);
  return 0;
}
