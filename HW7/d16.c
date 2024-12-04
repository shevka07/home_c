#include <stdio.h>

int is2pow(int n) 
{
    if (n <= 0) return 0;
    if (n == 1) return 1; 
    if (n % 2 != 0) return 0;
    return is2pow(n / 2);
}

int main() 
{
    int n;
    scanf("%d", &n);
    if (is2pow(n)) 
    {
        printf("YES\n", n);
    } 
    else 
    {
        printf("NO\n", n);
    }
    return 0;
}