#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX_LENGTH 1001

int main() 
{
    FILE *input_file, *output_file;
    char str[MAX_LENGTH];
    int i;
    input_file = fopen("input.txt", "r");
    fgets(str, sizeof(str), input_file);
    fclose(input_file);
    int len = strlen(str);
    if (str[len - 1] == '\n') 
    {
        str[len - 1] = '\0';
    }
    for (i = 0; str[i] != '\0'; i++) 
    {
        if (str[i] == 'a') 
        {
            str[i] = 'b';
        } 
        else if (str[i] == 'b') 
        {
            str[i] = 'a';
        } 
        else if (str[i] == 'A') 
        {
            str[i] = 'B';
        } 
        else if (str[i] == 'B') 
        {
            str[i] = 'A';
        }
    }
    output_file = fopen("output.txt", "w");
    fprintf(output_file, "%s", str);
    fclose(output_file);
    return 0;
}