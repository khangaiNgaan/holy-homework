#include <stdio.h>

int main() 
{
    int n, sum;
    sum = 0;
    for (int i = 1; sum < 100; i++) {
        sum += i;
        n = i;
    }
    printf("第一次和大于或等于100时和为%d\n", sum);
    printf("第一次和大于或等于100时n为%d\n", n);
    return 0;
}
