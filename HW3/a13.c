#include <stdio.h>
int main(void)
{
    int a, i, s, ch;
    s = 1;
    scanf("%d", &a);
    for (int i = 0; i <= 2; i++)
    {
        ch = a%10;
        a = a/10;
        s*= ch;
    }
    printf("%d\n",s);
    return 0;
}