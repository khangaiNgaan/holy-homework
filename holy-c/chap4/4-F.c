#include<stdio.h>

int main() {
  double income, tax, net_income, payload;
  scanf("%lf", &income);
  payload = income;
  tax = 0;
  if (payload - 6000 > 0) {
    tax += (payload - 6000) * 0.2;
    payload = 6000;
  }
  if (payload - 3000 > 0) {
    tax += (payload - 3000) * 0.15;
    payload = 3000;
  }
  if (payload - 2000 > 0) {
    tax += (payload - 2000) * 0.1;
    payload = 2000;
  }
  if (payload - 1000 > 0) {
    tax += (payload - 1000) * 0.05;
  }
  net_income = income - tax;
  printf("个人所得税=%.1lf 实际报酬=%.2lf\n", tax, net_income);
  return 0;
}
