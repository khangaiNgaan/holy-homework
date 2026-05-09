#include <stdio.h>

int main()
{
    int a[10];
    int t;
    int count = 1;
    for (int i = 0; i < 10; i++) {
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9 - i; j++) {
            if (a[j] > a[j + 1]) {
                t = a[j];
                a[j] = a[j + 1];
                a[j + 1] = t;
            }
        }
    }
    for (int i = 0; i < 9; i++) {
        if (a[i] == a[i + 1]) {
            continue;
        }
        count++;
    }
    printf("%d\n", count);
    return 0;
}
