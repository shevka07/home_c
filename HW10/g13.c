#include <stdio.h>
#include <string.h>

#define MAX_LENGTH 1001

int main()
{
    FILE *input_file, *output_file;
    char file_path[MAX_LENGTH];
    int i;
    int last_slash_index = -1;
    int last_dot_index = -1;
    int len;
    input_file = fopen("input.txt", "r");
    fgets(file_path, sizeof(file_path), input_file);
    fclose(input_file);
    len = strlen(file_path);
    if (file_path[len - 1] == '\n')
    {
        file_path[len - 1] = '\0';
        len--;
    }
    for (i = len - 1; i >= 0; i--)
    {
        if (file_path[i] == '/')
        {
            last_slash_index = i;
            break;
        }
    }
    last_dot_index = -1;
    for (i = len - 1; i > last_slash_index; i--)
    {
        if (file_path[i] == '.')
        {
            last_dot_index = i;
            break;
        }
    }
    if (last_dot_index != -1)
    {
        file_path[last_dot_index + 1] = '\0';
        strcat(file_path, "html");
    }
    else
    {
        strcat(file_path, ".html");
    }
    output_file = fopen("output.txt", "w");
    fprintf(output_file, "%s", file_path);
    fclose(output_file);
    return 0;
}