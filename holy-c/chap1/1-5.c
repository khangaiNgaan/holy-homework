#include<stdio.h>
int main() {
  int a, b, c;
  int max;
  scanf("%d %d %d", &a, &b, &c);
  if (a > b) {
    max = a;
    if (c > max) {
      max = c;
    }
  } else {
    max = b;
    if (c > max) {
      max = c;
    }
  }
  printf("%d", max);
  return 0;
}
