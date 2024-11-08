#include <stdio.h>
int main(void)
{
    int a[5];
    int i, min, max;
    for (int i = 0; i <= 4; i++)
    {
        scanf("%d", &a[i]);
    }
    min = a[0];
    max = a[0];
    for (int i = 1; i <= 4; i++)
    {
        if (a[i] < min)
        min = a[i];
        if (a[i] > max)
        max = a[i];
    }
    printf("%d\n",min+max);
    return 0;
}