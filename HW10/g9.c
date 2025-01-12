#include <stdio.h>
#include <string.h>
#include <stdbool.h>

#define MAX_LENGTH 1001

int main() 
{
    FILE *input_file, *output_file;
    char str[MAX_LENGTH];
    char result[MAX_LENGTH];
    int result_len = 0;
    bool seen[256] = {false}; 
    int i;
    input_file = fopen("input.txt", "r");
    fgets(str, sizeof(str), input_file);
    fclose(input_file);
    int len = strlen(str);
    if (str[len - 1] == '\n') 
    {
        str[len - 1] = '\0';
        len--;
    }
    for (i = 0; i < len; i++) 
    {
         if(str[i] == ' ') 
            continue;
        if (!seen[(unsigned char)str[i]]) 
        {
            result[result_len++] = str[i];
            seen[(unsigned char)str[i]] = true;
        }
    }
    result[result_len] = '\0';
    output_file = fopen("output.txt", "w");
    fprintf(output_file, "%s", result);
    fclose(output_file);
    return 0;
}