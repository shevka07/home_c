#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX_LENGTH 1001
void replace_name(char *str, const char *old_name, const char *new_name, char *result) 
{
    int i, j, k;
    int str_len = strlen(str);
    int old_len = strlen(old_name);
    int new_len = strlen(new_name);
     j=0;


    for(i=0; i< str_len; i++)
    {
        if(i + old_len <= str_len && strncmp(&str[i], old_name, old_len) == 0)
        {
           strcat(result, new_name);
           j+= new_len;
           i += old_len -1;
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
    const char *old_name = "Cao";
    const char *new_name = "Ling";
    input_file = fopen("input.txt", "r");
    fgets(str, sizeof(str), input_file);
    fclose(input_file);
    int len = strlen(str);
    if (str[len - 1] == '\n') {
        str[len - 1] = '\0';
         len--;
    }
    replace_name(str, old_name, new_name, result);
    output_file = fopen("output.txt", "w");
    fprintf(output_file, "%s", result);
    fclose(output_file);
    return 0;
}