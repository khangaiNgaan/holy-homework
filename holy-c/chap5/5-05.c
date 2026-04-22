#include<stdio.h>
#include<math.h>
 
int main() {
  int a[15];
  int i, j;
  double res = 0;
  for (i = 0; i < 15; i++) {
    scanf("%d", &a[i]);
  }
  for (j = 0; j < 15; j++) {
    res = sqrt(a[j] + res);
  }
  printf("%.2lf", res);
  return 0;
}
