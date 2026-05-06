#include <stdio.h>

int main() 
{
    double a[10], b[10], sum;
    int i;
    for (i = 0; i < 10; i++) {
        scanf("%lf", &a[i]);
    }
    for (i = 0; i < 10; i++) {
        b[i] = 1 / a[i];
    }
    for (i = 0; i < 10; i++) {
        sum += b[i];
    }
    printf("%.2lf\n", sum);
    return 0;
}
