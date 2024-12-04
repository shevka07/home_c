#include <stdio.h>
void all_down(int n) 
{
    if(n==0)
    return;
    printf("%d ",n);
    all_down(n-1);
}

int main(void)
{
    int n;
    scanf("%d",&n);
    all_down(n); 
    return 0;
}

