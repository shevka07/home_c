#include <stdio.h>
int main(void)
{
    int a, i, k;
    scanf("%d", &a);
    k=0;
    while (a>0)
    {
        if (a%10==9)
        {
            k++;
        }
        a = a/10;
    }
    if (k==1)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    return 0;
}