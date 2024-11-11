#include <stdio.h>
int main(void)
{
    int a, min, max;
    scanf("%d", &a);
    min = a%10;
    max = a%10;
    a = a/10;
    while (a>0)
    {
        if (a%10<min)
        {
            min = a%10;
        }
        if (a%10>max)
        {
            max = a%10;
        }
        a = a/10;
    }
    printf("%d %d\n", min, max);
    return 0;
}