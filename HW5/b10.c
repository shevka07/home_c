#include <stdio.h>
int main(void)
{
    int a, k, i;
    scanf("%d", &a);
    i = 0;
    k = a%10;
    a = a/10;
    while (a>0)
    {
        if (a%10>=k)
        {
            i++;
        }
        k = a%10;
        a = a/10;
    }
    if (i==0)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    return 0;
}