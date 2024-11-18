#include <stdio.h>
int abs_val(int);
int main()
{
    int a;
    scanf("%d",&a);
    printf("%d\n", abs_val(a));
    return 0;
}
int abs_val(int a)
{
    if (a<0)
        return (-1)*a;
    else
     return a;
}