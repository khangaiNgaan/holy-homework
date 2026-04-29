#include<stdio.h>
 
int main() 
{
    int n, sum;
    sum = 0;
    scanf("%d", &n);
    if (n < 0 | n > 1000) {
        return 0;
    }
    while (n > 0) {
        sum += n % 10;
        n /= 10;
    }
    printf("%d\n", sum);
    return 0;
}
