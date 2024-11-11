#include <stdio.h>
int main(void)
{
    int a, s = 0;
    scanf("%d", &a);
    while (a>0)
    {
        s+=a%10;
        a = a/10;
    }
    if (s==10)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    return 0;
}