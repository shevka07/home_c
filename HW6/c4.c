#include <stdio.h>
int f(int x)
{
    if ((x<2)&&(x>=-2))
    return (x*x);
    if (x>=2)
    return (x*x+4*x+5);
    if (x<-2)
    return 4;
}
int main()
{
    int a;
    int max;
    scanf("%d",&a);
    max = f(a);
    do
    {
        scanf("%d",&a);
        int zn=f(a);
        if (max<zn)
        max = zn;
    } while (a!=0);
    printf("%d\n", max);
    return 0;
}