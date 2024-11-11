#include <stdio.h>
int main(void)
{
    int a;
    int k=0;
    scanf("%d", &a);
    while (a>0)
    {
        a = a/10;
        k+=1;
    }
    if(k==3)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    } 
    return 0;
}