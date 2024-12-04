#include <stdio.h>
int numbers(int n) 
{
    if(n>0)
    {
        printf("%d ",n%10);
        numbers(n/10); 
    }   
}

int main(void)
{
    int n;
    scanf("%d",&n);
    if (n==0)
    printf("0");
    else
    numbers(n); 
    return 0;
}
