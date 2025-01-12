#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX_LENGTH 1001

int is_palindrome(const char str[]) 
{
    int len = strlen(str);
    int i, j;
    for (i = 0, j = len - 1; i < j; i++, j--) 
    {
        if (str[i] != str[j]) 
        {
            return 0; 
        }
    }
    return 1;
}

int main() 
{
    FILE *input_file, *output_file;
    char str[MAX_LENGTH];
    input_file = fopen("input.txt", "r");
    fgets(str, sizeof(str), input_file);
    fclose(input_file);
    int len = strlen(str);
    if (str[len - 1] == '\n') 
    {
        str[len - 1] = '\0';
    }
    output_file = fopen("output.txt", "w");
    if (is_palindrome(str)) 
    {
        fprintf(output_file, "YES\n");
    } 
    else 
    {
        fprintf(output_file, "NO\n");
    }
    fclose(output_file);
    return 0;
}