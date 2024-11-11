#include <stdio.h>
int main(void)
{
    int a, k = 0;
    a = 1;
    while (a!=0)
    {
        scanf("%d", &a);
        k++;
    }
    printf("%d\n", k-1);
    return 0;
}