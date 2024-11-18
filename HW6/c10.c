#include <stdio.h>
void print_simple(int n)
{
    while (n>1)
    {
        int i=2;
        while (i<=n)
        {
            if (n%i==0)
            {
                n = n/i;
                printf("%d ",i);
                break;
            }
            i++;
        }
    }
}
int main()
{
    int n;
    scanf("%d", &n);
    print_simple(n);
    return 0;
}
