#include <stdio.h>
int main(void)
{
    int a, b;
        scanf("%d%d", &a,&b);
        if (a>b)
        printf("Above\n");
        if (a<b)
        printf("Less\n");
        if (a==b)
        printf("Equal\n");
    return 0;
}