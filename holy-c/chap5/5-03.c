#include<stdio.h>
 
int main() {
  double n;
  int count = 0;
  scanf("%lf", &n);
  while (fabs(n) >= 1) {
    count += 1;
    n /= 10;
  }
  printf("%d\n", count);
  return 0;
}
