#include <stdio.h>
#include <string.h>
#include <ctype.h>

void print_digit(char s[]) 
{
    int counts[10] = {0};
    for (int i = 0; s[i] != '\0'; i++) 
    {
        if (isdigit(s[i]))
            counts[s[i] - '0']++;
    }
    for (int i = 0; i < 10; i++) 
    {
        if (counts[i] > 0)
            printf("%d %d\n", i, counts[i]);
    }
}

/*
int main() 
{
    char str[] = "Hello123 world77.";
    print_digit(str);
    return 0;
}
*/