#include <stdio.h>
int grow_up(int a)
{
    int fl = 1, i = 0;
    int k = a%10;
    a = a/10;
    while (a>0)
    {
        if (a%10>=k)
        {
            i++;
        }
        k = a%10;
        a = a/10;
    }
    if (i!=0)
    {
        fl = 0;
    }
    return fl;
}

int main()
{
    int x;
    scanf("%d", &x);
    if (grow_up(x)==1)
    {
        printf("YES");
    }
    else 
    {
        printf("NO");
    }
    return 0;
}
