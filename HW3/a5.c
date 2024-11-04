#include <stdio.h>
int main(void)
{
    int a,b,c;
    float d;
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    d = (a+b+c)/3.0;
    printf("%.2f\n",d);
    return 0;
}