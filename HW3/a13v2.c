#include <stdio.h>
int main(void)
{
    char a[3];
    int b[3], i, s;
    s = 1;
    for (int i = 0; i <= 2; i++)
    {
        scanf("%c", &a[i]);
        b[i] = a[i]-'0';
        s = s*b[i];
    }
    printf("%d\n",s);
    return 0;
}