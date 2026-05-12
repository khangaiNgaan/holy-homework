#include <stdio.h>

int main()
{
    int a[3][4];
    int max, row, col;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            scanf("%d", &a[i][j]);
        }
    }
    max = a[0][0];
    row = 0, col = 0;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            if (a[i][j] > max) {
                max = a[i][j];
                row = i;
                col = j;
            }
        }
    }
    printf("max=%d\nrow=%d\ncolumn=%d\n", max, row, col);
    return 0;
}
