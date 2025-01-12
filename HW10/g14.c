#include <stdio.h>
#include <string.h>

#define MAX_LENGTH 101

int main()
{
    FILE *input_file, *output_file;
    char full_name[MAX_LENGTH];
    char first_name[MAX_LENGTH] = "";
    char last_name[MAX_LENGTH] = "";
    int i, j;
    int space_count = 0;
    input_file = fopen("input.txt", "r");
    fgets(full_name, sizeof(full_name), input_file);
    fclose(input_file);
    int len = strlen(full_name);
    if (full_name[len - 1] == '\n')
    {
        full_name[len - 1] = '\0';
        len--;
    }
    j = 0;
    for (i = 0; i <= len; i++)
    {
        if (full_name[i] == ' ' || full_name[i] == '\0')
        {
            if (space_count == 0)
            {
                strncpy(last_name, full_name, j);
                last_name[j] = '\0';
            }
            else if (space_count == 1)
            {
                strncpy(first_name, full_name + (i - j), j);
                first_name[j] = '\0';
                break;
            }
            j = 0;
            space_count++;
        }
        else
        {
            j++;
        }
    }
    output_file = fopen("output.txt", "w");
    fprintf(output_file, "Hello, %s %s!", first_name, last_name);
    fclose(output_file);
    return 0;
}