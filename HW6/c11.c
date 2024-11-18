#include <stdio.h>
int nod(int a, int b)
{
    int maxNum, minNum;
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
}
int main()
{
    int a, b;
    scanf("%d%d", &a, &b);
    printf("%d", nod(a,b));
    return 0;
}
