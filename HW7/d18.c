#include <stdio.h>
void print_digits(int n) 
{
    if (n == 0) 
    {
        return; 
    } 
    else 
    {
        print_digits(n / 10);
        printf("%d ", n % 10);
    }
}

int main() {
    int n;
    scanf("%d", &n);
    print_digits(n);
    return 0;
}