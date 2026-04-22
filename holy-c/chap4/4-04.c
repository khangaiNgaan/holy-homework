#include<stdio.h>

int main() {
  int delta_g, delta_h, temp, delta_s;
  scanf("%d%d%d", &delta_h,&temp,&delta_s);
  delta_g = delta_h - temp * delta_s;
  if (delta_g < 0) {
    printf("Yes");
  } else {
    printf("No");
  }
  return 0;
}
