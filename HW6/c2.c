#include <stdio.h>
int power(int, int);
int main()
{
    int n,p;
    scanf("%d%d",&n, &p);
    printf("%d\n", power(n,p));
    return 0;
}
int power(int n, int p)
{
    int i;
    int s = 1;
    for(i=0; i<p; i++)
    {
        s*=n;
    }
     return s;
}