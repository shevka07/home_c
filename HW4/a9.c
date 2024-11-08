#include <stdio.h>
int main(void)
{
    int a[5];
    int i, max;
    for (int i = 0; i <= 4; i++)
    {
        scanf("%d", &a[i]);
    }
    max = a[0];
    for (int i = 1; i <= 4; i++)
    {
        if (a[i]>max)
        max = a[i];
    }
    printf("%d\n",max);
    return 0;
}