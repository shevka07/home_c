#include <stdio.h>
#include <stdlib.h>
const int MAXSIZE = 100;

void printDigits(int N) 
{
   if (N == 0) 
   {
        printf("0\n");
        return;
    }
    int digits[MAXSIZE]; 
    int count = 0;
    while (N > 0) 
    {
        digits[count] = N % 10;
        N /= 10;
        count++;
    }
    for (int i = count - 1; i >= 0; i--) 
    {
        printf("%d ", digits[i]);
    }
    printf("\n");
}

int main() 
{
    int N;
    scanf("%d", &N);
    printDigits(N);
    return 0;
}