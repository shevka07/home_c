#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX_LENGTH 1001

int main() 
{
    FILE *input_file, *output_file;
    char str[MAX_LENGTH];
    int count = 0;
    int i, j;
    char current_word[MAX_LENGTH] = "";
    input_file = fopen("input.txt", "r");
    fgets(str, sizeof(str), input_file);
    fclose(input_file);
    int len = strlen(str);
    if (str[len - 1] == '\n') 
    {
        str[len - 1] = '\0';
        len--;
    }
    j = 0;
    for (i = 0; i <= len; i++) 
    {
        if (str[i] == ' ' || str[i] == '\0') 
        {
            current_word[j] = '\0';
             if (j > 0 && (current_word[j - 1] == 'a' || current_word[j - 1] == 'A')) 
             {
                count++;
             }
           j = 0;
        } 
        else 
        {
          current_word[j++] = str[i];
        }
     }
    output_file = fopen("output.txt", "w");
    fprintf(output_file, "%d", count);
    fclose(output_file);
    return 0;
}