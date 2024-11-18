#include <stdio.h>
int middle(int a, int b)
{
     int s = (a+b)/2;
     return s;
}
int main()
{
    int a,b;
    scanf("%d%d",&a, &b);
    printf("%d\n", middle(a,b));
    return 0;
}