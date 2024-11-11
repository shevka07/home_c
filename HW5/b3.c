#include <stdio.h>
int main(void)
{
    int a,b;
    int s=0;
    scanf("%d%d", &a, &b);
    for (int i = a; i <= b; i++)
    {
        s+= i*i;
    }
    printf("%d ", s);
    return 0;
}