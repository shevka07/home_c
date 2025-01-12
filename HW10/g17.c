#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

#define MAX_LENGTH 1001

void swap_adjacent_letters(char *str, char *result) 
{
    int len = strlen(str);
    char letters[MAX_LENGTH];
    int letter_count = 0;
    int i;
    int j = 0;

    for (i = 0; i < len; i++) 
    {
        if (isalpha(str[i])) {
            letters[letter_count++] = str[i];
        }
    }
    for (i = 0; i < letter_count - 1; i += 2) 
    {
        char temp = letters[i];
        letters[i] = letters[i + 1];
        letters[i + 1] = temp;
    }
    int letter_index = 0;
     for (i = 0; i < len; i++) 
     {
        if (isalpha(str[i])) {
            result[j++] = letters[letter_index++];
        } 
        else 
        {
            result[j++] = str[i];
        }
    }
    result[j] = '\0';
}


int main() 
{
    FILE *input_file, *output_file;
    char str[MAX_LENGTH];
    char result[MAX_LENGTH] = "";
    input_file = fopen("input.txt", "r");
    fgets(str, sizeof(str), input_file);
    fclose(input_file);
     int len = strlen(str);
    if (str[len - 1] == '\n') 
    {
        str[len - 1] = '\0';
         len--;
    }
    swap_adjacent_letters(str, result);
    output_file = fopen("output.txt", "w");
    fprintf(output_file, "%s", result);
    fclose(output_file);
    return 0;
}