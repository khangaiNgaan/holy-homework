#include <stdio.h>
 
int main()
{
    double a, b, sum, total;
    a = 1;
    b = 2;
    total = 0;
    for (int i = 1; i <= 20; i++) {
        total += b / a;
        sum = a + b;
        a = b;
        b = sum;
    }
    printf("%lf\n", total);
    return 0;
}
