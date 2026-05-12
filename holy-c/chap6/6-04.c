#include <stdio.h>

int main()
{
    int a[5], b[5];
    int j;
    for (int i = 0; i < 5; i++) {
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < 5; i++) {
        j = 4 - i;
        b[i] = a[j];
    }
    for (int i = 0; i < 5; i++) {
        printf("%d ", b[i]);
    }
    printf("\n");
    return 0;
}
