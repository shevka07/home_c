#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX_LENGTH 1001

int main()
{
    FILE *input_file, *output_file;
    char str[MAX_LENGTH];
    char current_word[MAX_LENGTH] = "";
    int i, j;
    int in_word = 0;
    input_file = fopen("input.txt", "r");
    fgets(str, sizeof(str), input_file);
    fclose(input_file);
    int len = strlen(str);
    if (str[len - 1] == '\n')
    {
        str[len - 1] = '\0';
        len--;
    }
    output_file = fopen("output.txt", "w");
    j = 0;
    for (i = 0; i <= len; i++)
    {
        if (str[i] == ' ' || str[i] == '\0')
        {
            if (in_word)
            {
                current_word[j] = '\0';
                fprintf(output_file, "%s\n", current_word);
                j = 0;
                in_word = 0;
            }
        }
        else
        {
            current_word[j++] = str[i];
            in_word = 1;
        }
    }
    fclose(output_file);
    return 0;
}