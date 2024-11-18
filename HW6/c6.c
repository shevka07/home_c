#include <stdio.h>
unsigned long long pow2(int N)
{
    int i;
    unsigned long long int p = 1;
    for (i=2; i<=N; i++)
    {
        p*= 2;
    }
    return p;
}
int main()
{
    int N;
    scanf("%d",&N);
    printf("%llu\n", pow2(N));
    return 0;
}