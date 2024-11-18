#include <stdio.h>
void Sum_chet(int x)
{
    int s = 0;
    while (x>0)
    {
        s+=x%10;
        x=x/10;
    }
    if (s%2==0)
    printf("YES");
    else 
    printf("NO");
}

int main()
{
    int x;
    scanf("%d", &x);
    Sum_chet(x);
    return 0;
}
