#include <stdio.h>
#include <string.h>
#include <ctype.h>

void read_string(char str[], int max_len) 
{
    fgets(str, max_len, stdin);
    str[strcspn(str, "\n")] = '\0';
    int len = strlen(str);
    if (len > 0 && str[len - 1] == '.')
    {
        str[len - 1] = '\0';
    }
}


void compress_string(char str[]) 
{
    int len = strlen(str);
    char current_char = str[0];
    int count = 1;
    for (int i = 1; i < len; i++) 
    {
        if (str[i] == current_char) 
            count++;
        else 
        {
            printf("%c%d", current_char, count);
            current_char = str[i];
            count = 1;
        }
    }
    printf("%c%d", current_char, count);
}


int main() 
{
    char str[1001];
    read_string(str, sizeof(str));
    compress_string(str);
    printf("\n");
    return 0;
}