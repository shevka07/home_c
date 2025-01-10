#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void countAndSortDigits(const char *numStr) 
{
    int counts[10] = {0};
    for (int i = 0; numStr[i] != '\0'; i++) 
    {
        counts[numStr[i] - '0']++;
    }
    for (int i = 0; i < 10; i++) 
    {
        if (counts[i] > 0) 
        {
            printf("%d %d\n", i, counts[i]);
        }
    }
}

int main() 
{
    char numStr[1001];
    scanf("%1000s", numStr);
    countAndSortDigits(numStr);
    return 0;
}