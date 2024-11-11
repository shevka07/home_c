#include <stdio.h>
int main(void)
{
    int a, k1, k2;
    scanf("%d", &a);
    k1 = 0;
    k2 = 0;
    while (a>0)
    {
        if ((a%10)%2==0)
        {
            k2++;
        }
        a = a/10;
        k1++;
    }
    if (k1==k2)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    return 0;
}