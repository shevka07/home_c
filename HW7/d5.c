#include <stdio.h>
void dec2two(int n) 
{
    if(n==0)
    return;
    dec2two(n/2); 
    printf("%d",n%2);
}

int main(void)
{
    int n;
    scanf("%d",&n);
    if (n==0)
    printf("0");
    else
    dec2two(n); 
    return 0;
}
