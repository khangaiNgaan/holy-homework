#include<stdio.h>

int main() {
  int number;
  scanf("%d", &number);
  if (number % 5 == 0 && number % 7 == 0) {
    printf("Yes");
  } else {
    printf("No");
  }
  return 0;
}
