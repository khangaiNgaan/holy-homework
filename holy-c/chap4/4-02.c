#include<stdio.h>
#include<math.h>

int main() {
  int x, res;
  scanf("%d", &x);
  if (x < 1) {
    res = x;
    printf("y=x=%d\n", res);
  } else if (x < 10) {
    res = x * 2 - 1;
    printf("y=2*x-1=%d\n", res);
  } else {
    res = x * 3 - 11;
    printf("y=3*x-11=%d\n", res);
  }
  return 0;
}
