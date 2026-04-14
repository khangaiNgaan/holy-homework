#include<stdio.h>
#include<math.h>

int main() {
  double x, y;
  double d1, d2, d3, d4;
  scanf("%lf%lf", &x, &y);
  d1 = sqrt(pow(x-2,2)+pow(y-2,2));
  d2 = sqrt(pow(x+2,2)+pow(y-2,2));
  d3 = sqrt(pow(x+2,2)+pow(y+2,2));
  d4 = sqrt(pow(x-2,2)+pow(y+2,2));
  if (d1 <= 1 || d2 <= 1 || d3 <= 1 || d4 <= 1) {
    printf("10");
  } else {
    printf("0");
  }
  return 0;
}
