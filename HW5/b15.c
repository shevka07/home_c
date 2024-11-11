#include <stdio.h>
int main(void)
{
    int a, k = 0;
    a = 1;
    while (a!=0)
    {
        scanf("%d", &a);
        if ((a%2==0)&&(a!=0))
        {
            k++;
        }
    }
    printf("%d\n", k);
    return 0;
}