#include <stdio.h>
int main(void)
{
    int a, b;
    scanf("%d", &a);
    b = 0;
    while (a>0)
    {
        b = b*10+a%10;
        a = a/10;
    }
    printf("%d\n",b);
    return 0;
}