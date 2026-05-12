#include <stdio.h>

int main()
{
    char s[3][81];
    int upper, lower, chinese, digit, space, others;
    upper = lower = chinese = digit = space = others = 0;
    for (int i = 0; i < 3; i++) {
        fgets(s[i], 80, stdin);
    }
    for (int i = 0; i < 3; i++) {
        for (int j = 0; s[i][j] != '\0'; j++) {
            if (s[i][j] >= 'A' && s[i][j] <= 'Z') {
                upper++;
            } else if (s[i][j] >= 'a' && s[i][j] <= 'z') {
                lower++;
            } else if ( (unsigned char)s[i][j] > 128) {
                chinese++;
                j+=2;
            } else if (s[i][j] >= '0' && s[i][j] <= '9') {
                digit++;
            } else if (s[i][j] == ' ') {
                space++;
            } else if (s[i][j] != '\n') {
                others++;
            }
        }
    }
    printf("upper:%d\n", upper);
    printf("lower:%d\n", lower);
    printf("chinese:%d\n", chinese);
    printf("digit:%d\n", digit);
    printf("space:%d\n", space);
    printf("others:%d\n", others);
    return 0;
}
