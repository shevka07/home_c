#include <stdio.h>
int sum(int N)
{
    int i,s = 0;
    for (i=1; i<=N; i++)
    {
        s+= i;
    }
    return s;
}
int main()
{
    int N;
    scanf("%d",&N);
    printf("%d\n", sum(N));
    return 0;
}