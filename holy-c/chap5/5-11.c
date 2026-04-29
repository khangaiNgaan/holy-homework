#include<stdio.h>

int main() 
{
    int n, res;
    scanf("%d", &n);
    if (n < 0) {
        return 0;
    }
    res = 0;
    for (int i = 1; i <= n; i++) {
      for (int j = 1; j <= i; j++) {
        res += j;
      }
    }
    printf("%d\n", res);
    return 0;
}
