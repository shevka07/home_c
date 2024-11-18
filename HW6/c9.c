#include <stdio.h>
int factorial(int n)
{
    int p = 1;
    for (int i=1; i<=n; i++)
    {
        p*= i;
    }
    return p;
}
int main()
{
    int n;
    scanf("%d", &n);
    printf("%d", factorial(n));
    return 0;
}
