#include <stdio.h>
int all_sum(int n) 
{
    if(n<=1)
    return 1;
    int sum = n + all_sum(n-1);
    return sum;
}

int main(void)
{
    int n;
    scanf("%d",&n);
    printf("%d\n", all_sum(n)); 
    return 0;
}

