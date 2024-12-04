#include <stdio.h>
int recurs_power(int n, int p) 
{
    if (p == 0) 
    {
        return 1;
    } 
    else if (p < 0) 
    {
        return 0;
    } 
    else 
    {
        return n * recurs_power(n, p - 1);
    }
}

int main() 
{
    int n, p;
    scanf("%d%d", &n,&p);
    int result = recurs_power(n, p);
    printf("%d\n", result);
    return 0;
}