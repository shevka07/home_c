#include <stdio.h>
int main(void)
{
    int a;
    scanf("%d", &a);
    for (int i = 10; i<=a; i++)
    {
        int tempVal = i;
        int tempVal1 = tempVal;
        int sum = 0;
        int comp = 1;
        while (tempVal>0)
        {
            sum+= tempVal%10;
            comp*= tempVal%10;
            tempVal = tempVal/10;
        }
        if (sum==comp)
        {
            printf("%d ", tempVal1);
        }
    } 
    return 0;
}