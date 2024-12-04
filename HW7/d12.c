#include <stdio.h>

void printSequence(int n, int k, int count) 
{
    if (n == 0) return; 
    if (count < k) 
    {
        printf("%d ", k);
        printSequence(n - 1, k, count + 1);
    } 
    else 
    {
        printSequence(n, k + 1, 0);
    }
}

int main() 
{
    int n;
    scanf("%d", &n);
    printSequence(n, 1, 0);
    printf("\n");
    return 0;
}