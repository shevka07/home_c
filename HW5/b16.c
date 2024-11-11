#include <stdio.h>
int main(void)
{
    int a, b, maxNum, minNum;
    scanf("%d%d", &a, &b);
    if (a>=b)
    {
        maxNum = a;
        minNum = b;
    }
    else
    {
        maxNum = b;
        minNum = a;        
    }
    while (minNum>0)
    {
        a = minNum;
        minNum = maxNum%minNum;
        maxNum = a;
    }
    printf("%d\n", maxNum);
    return 0;
}