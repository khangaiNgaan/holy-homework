#include<stdio.h>
 
int main() {
  int i;
  int count = 0;
  for (i = 200; i <= 1000; i++) {
    if (i % 7 == 0) {
      count++;
    }
  }
  printf("%d", count);
  return 0;
}
