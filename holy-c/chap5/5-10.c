#include<stdio.h>
 
int main() 
{
    int n, res;
    scanf("%d", &n);
    if (n < 0) {
        return 0;
    }
    res = 0;
    for (int i = 1; i <= n; i++) {
        res += i;
    }
    printf("%d\n", res);
    return 0;
}
