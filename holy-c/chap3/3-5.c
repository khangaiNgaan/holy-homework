#include<stdio.h>
#include<math.h>

int main() {
  double num;
  scanf("%lf\n", &num);
  char sign;
  if (num < 0) {
    sign = '-';
  } else {
    sign = '+';
  }
  printf("sign:%c\n", sign);
  printf("integral part:%d\n", abs((int)num));
  double dec_frac_part = fabs(num - (int)num);
  printf("decimal fraction part:%f\n", dec_frac_part);
  return 0;
}
