#include <stdio.h>
int main(void)
{
    int a, i, k, b[10], fl = 0;
    scanf("%d", &a);
    k=0;
    while (a>0)
    {
        b[k] = a%10;
        a = a/10;
        k++;  
    }
    for (i = 0; i <= k; i++)
    {
        for (int j = 0; j <= k; j++)
        {
            if (j!=i)
            {
                if (b[j]==b[i])
                {
                    fl = 1;
                    goto skip;
                }
            }
        }

    }
    skip:
    if (fl==1)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    return 0;
}