#include <stdio.h>

int main()
{
    int w[8];
    int max, min;
    for (int i = 0; i < 8; i++) {
        scanf("%d", &w[i]);
    }
    max = w[0];
    for (int i = 1; i < 8; i++) {
        if (w[i] > max) {
            max = w[i];
        }
    }
    min = w[0];
    for (int i = 1; i < 8; i++) {
        if (w[i] < min) {
            min = w[i];
        }
    }
    printf("最小值是:%d\n", min);
    printf("最大值是:%d\n", max);
    return 0;
}
