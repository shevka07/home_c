#include <stdio.h>
void decToP(int N, int P) 
{
    int result[100];
    int i = 0;
    if (N == 0) 
    {
        printf("%d", 0);
    }
    while (N > 0) {
        result[i] = N%P;
        N = N/P;
        i++;
    }

    for (int j = i - 1; j >= 0; j--) 
    {
        if (result[j] >= 10) 
        {
            printf("%c", 'A' + (result[j] - 10));
        } 
        else 
        {
            printf("%d", result[j]);
        }
    }
}
int main()
{
    int N,P;
    scanf("%d%d",&N,&P);
    decToP(N,P);
    return 0;
}