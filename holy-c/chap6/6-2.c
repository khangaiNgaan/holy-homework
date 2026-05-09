#include <stdio.h>
#include <math.h>

int main()
{
    int a[200];
    int count = 0;
    int flag = 0;
    for (int i = 2; i < 200; i++) {
        for (int j = 2; j <= sqrt(i); j++) {
            if (i % j == 0) {
                flag = 1;
                break;
            }
        }
        if (flag == 0) {
            a[count] = i;
            count++;
        }
        flag = 0;
    }
    for (int i = 0; i < count; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
    return 0;
}
