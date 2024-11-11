#include <stdio.h>
int main(void)
{
    int a;
    int ch=-1, fl=0;
    scanf("%d", &a);
    while (a>0)
    {
        if (ch!=-1)
        {
            if (a%10==ch)
            {
                fl = 1;
            }
        }
        ch=a%10;
        a = a/10;  
    }
    if(fl==1)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    return 0;
}