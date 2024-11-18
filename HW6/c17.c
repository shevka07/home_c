#include <stdio.h>
int is_happy_number(int a)
{
    int sum = 0, fl = 0;
    int comp = 1;
    while (a>0)
        {
            sum+= a%10;
            comp*= a%10;
            a = a/10;
        }
    if (sum==comp)
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
    if (is_happy_number(x)==1)
    {
        printf("YES");
    }
    else 
    {
        printf("NO");
    }
    return 0;
}
