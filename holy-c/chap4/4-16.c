#include<stdio.h>

int main() {
  int a, b;
  scanf("%d%d", &a, &b);
  if (a % b == 0) {
    printf("能整除\n");
  } else {
    printf("不能整除\n");
  }
  return 0;
}
