#include<stdio.h>

int main() {
  int number;
  scanf("%d", &number);
  if (number > 99999 || number < 1) {
    return 1;
  }
  int a[5];
  int count = 0;
  int n = number;
  do {
    a[count] = n % 10;
    n /= 10;
    count++;
  } while (n > 0);
  printf("位数:%d\n", count);
  count--;
  printf("每位数字为:");
  int i;
  for (i = count; i >= 0; i--) {
    printf("%d", a[i]);
    if (i > 0) {
      printf(",");
    }
  }
  printf("\n");
  printf("反序数字为:");
  int j;
  for (j = 0; j <= count; j++) {
    printf("%d", a[j]);
  }
  printf("\n");
  return 0;
}
