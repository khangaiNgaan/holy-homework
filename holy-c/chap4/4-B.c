#include<stdio.h>

int main() {
  double data1, data2, res;
  char op;
  scanf("%lf%c%lf", &data1, &op, &data2);
  if (!(op == '+' || op == '-' || op == '*' || op == '/')) {
    printf("Error.\n");
    return 1;
  }
  if (data2 == 0) {
    printf("Error.\n");
    return 0;
  }
  switch (op) {
    case '+':
      res = data1 + data2;
      break;
    case '-':
      res = data1 - data2;
      break;
    case '*':
      res = data1 * data2;
      break;
    case '/':
      res = data1 / data2;
      break;
    default:
      printf("Error.\n");
      return 1;
  }
  printf("%.2lf", res);
  return 0;
}
