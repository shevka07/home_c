#include <stdio.h>
#include <string.h>

void reverse_string(char str[], int index) 
{
    if (str[index] == '.') 
    {
        return;
    }
    reverse_string(str, index + 1); 
    printf("%c", str[index]);
}

int main()
{
    char str[1000]; 
    fgets(str, sizeof(str), stdin);
    reverse_string(str, 0);
    printf("\n"); 
    return 0;
}