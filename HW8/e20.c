#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>


int compareChars(const void *a, const void *b) 
{
    return (*(char *)b - *(char *)a); 
}

long long findMaxNumber(long long N) 
{
    char numStr[25];
    sprintf(numStr, "%lld", N);
    int len = strlen(numStr);
    qsort(numStr, len, sizeof(char), compareChars);
    long long result = 0;
    sscanf(numStr, "%lld", &result);
    return result;
}

int main() 
{
    long long N;
    scanf("%lld", &N);
    long long maxNumber = findMaxNumber(N);
    printf("%lld\n", maxNumber);
    return 0;
}