#include <stdio.h>
int main(void)
{
    int N, a1 = 1, a2 = 1;
    scanf("%d", &N);
    if (N==1)
    {
        printf("1 ");
    }
    else 
    {
        if(N==2)
        {
            printf("1 1 ");
        }
        else
        {
            printf("1 1 ");
            for (int i = 1; i<=N-2; i++)
             {
                int a3 = a1+a2;
                printf("%d ", a3);
                a1 = a2;
                a2 = a3;
                }
        }
    }
    return 0;
}