#include <stdio.h>
int main(void)
{
    int a;
    int s=0;
    scanf("%d", &a);
    while (a>0)
    {
        s+=a%10;
        a = a/10;  
    }
    printf("%d ", s);
    return 0;
}