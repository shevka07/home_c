#include <stdio.h>
int main(void)
{
    int a, k = 0;
    scanf("%d", &a);
    for (int i = 1; i <= a; i++)
    {
        if (a%i==0)
        {
            k+=1;
            if (k>2)
            {
                goto skip;
            }
        }
    }
    skip:
    if (k == 2)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }    
    return 0;
}