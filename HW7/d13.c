#include <stdio.h>
int is_prime(int n, int delitel) 
{
    if (n == 1) return 0;
    if (delitel * delitel > n) return 1;
    if (n % delitel == 0) return 0;
    return is_prime(n, delitel + 1);
}

void printPrimeFactors(int n, int i) 
{
    if (n == 1) return;
    if (n % i == 0 && is_prime(i,2)) 
    {
        printf("%d ", i);
        printPrimeFactors(n / i, i);
    } 
    else 
    {
        printPrimeFactors(n, i + 1);
    }
}

int main()
{
    int n;
    scanf("%d", &n);
    printPrimeFactors(n, 2); 
    return 0;
}