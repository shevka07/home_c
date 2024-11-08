#include <stdio.h>
int main(void)
{
    char a[3];
    int b[3], i, max;
    max = 0;
    for (int i = 0; i <= 2; i++)
    {
        scanf("%c", &a[i]);
        b[i] = a[i]-'0';
        if (b[i]>max)
        max = b[i];
    }
    printf("%d\n",max);
    return 0;
}