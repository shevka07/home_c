#include <stdio.h>
int countSetBits(int n) 
{
    if (n == 0) 
    {
        return 0;
    } 
    else
    {
        return (n % 2) + countSetBits(n / 2);
    }
}

int main() 
{
    int n;
    scanf("%d", &n);
    int count = countSetBits(n);
    printf("%d\n", count);
    return 0;
}
