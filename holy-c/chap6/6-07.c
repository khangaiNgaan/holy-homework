#include <stdio.h>
#include <string.h>

int main()
{
    char s1[5];
    char s2[5];
    int res;
    scanf("%s%s", s1, s2);
    res = strcmp(s1, s2);
    printf("result:%d\n", res);
    return 0;
}
