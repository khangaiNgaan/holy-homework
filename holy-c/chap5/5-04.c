#include<stdio.h>
 
int main() {
  double i, pi;
  int sign = 1;
  for (i = 1; 1/i >= 1e-6; i = i + 2) {
    pi += (1/i) * sign;
    sign = -sign;
  }
  pi = pi * 4;
  printf("%lf\n", pi);
  return 0;
}
