#include <stdio.h>
int acounter(void) 
{
    char c;
    int count = 0;
    if (scanf("%c", &c) == 1)
    {
        if (c == 'a') 
        {
            count++;
        }
        if (c != '.') 
        {
            count += acounter();
        }
    }
    return count;
}

int main() 
{
    int result = acounter();
    printf("%d\n", result);
    return 0;
}