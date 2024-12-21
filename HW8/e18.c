#include <stdio.h>
#include <stdlib.h>

void countMultiples(int N) 
{
    for (int i = 2; i <= 9; i++) 
    {
        int count = 0;
        for (int j = 2; j <= N; j++) 
        {
            if (j % i == 0) 
                count++;
        }
        printf("%d %d\n", i, count);
    }
}


int main() 
{
    int N;
    scanf("%d", &N);
    countMultiples(N);
    return 0;
}