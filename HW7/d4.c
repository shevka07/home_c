#include <stdio.h>
void revnumbers(int n) 
{
    if(n==0)
    return;
    revnumbers(n/10); 
    printf("%d ",n%10);
}

int main(void)
{
    int n;
    scanf("%d",&n);
    if (n==0)
    printf("0");
    else
    revnumbers(n); 
    return 0;
}
