#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX_LENGTH 1001

int main() 
{
    FILE *input_file, *output_file;
    char str[MAX_LENGTH];
    char longest_word[MAX_LENGTH] = "";
    char current_word[MAX_LENGTH] = "";
    int i, j;
    int max_len = 0;
    int current_len = 0;
    input_file = fopen("input.txt", "r");
    fgets(str, sizeof(str), input_file);
    fclose(input_file);
    int len = strlen(str);
    if (str[len - 1] == '\n') 
    {
        str[len - 1] = '\0';
        len--;
    }
     j=0;
     for (i = 0; i <= len; i++)
      {
        if (str[i] == ' ' || str[i] == '\0') 
        {
            current_word[j] = '\0';
            if (current_len > max_len) 
            {
                max_len = current_len;
                strcpy(longest_word, current_word);
            }
           current_len = 0;
            j = 0;
        } 
        else 
        {
           current_word[j++] = str[i];
            current_len++;
        }
     }
    output_file = fopen("output.txt", "w");
    fprintf(output_file, "%s", longest_word);
    fclose(output_file);
    return 0;
}