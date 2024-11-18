#include <stdio.h>
int is_prime(int a)
{
    int fl = 0, k = 0;
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
        fl = 1;
    }
    else
    {
        fl = 0;
    }    
    return fl;
}

int main()
{
    int x;
    scanf("%d", &x);
    if (is_prime(x)==1)
    {
        printf("YES");
    }
    else 
    {
        printf("NO");
    }
    return 0;
}
