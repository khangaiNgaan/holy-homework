#include<stdio.h>

int main()
{
    int a[10];
    int pos = 0, neg = 0, zero = 0;
    for (int i = 0; i < 10; i++) {
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < 10; i++) {
        if (a[i] > 0) {
            pos++;
        } else if (a[i] < 0) {
            neg++;
        } else {
            zero++;
        }
    }
    printf("%d %d %d\n", pos, neg, zero);
    return 0;
}
