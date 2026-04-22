#include<stdio.h>

int main() {
  int number;
  scanf("%d", &number);
  if (number % 2 == 0 || number == 0) {
    printf("偶数\n");
  } else {
    printf("奇数\n");
  }
  return 0;
}
