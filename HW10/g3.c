#include <stdio.h>
#include <string.h>

int main()
{
    FILE *input_file, *output_file;
    char str[1001];
    int len, i;
    input_file = fopen("input.txt", "r");
    fgets(str, sizeof(str), input_file);
    fclose(input_file);
    len = strlen(str);
    if (str[len - 1] == '\n')
    {
        str[len - 1] = '\0';
        len--;
    }
    output_file = fopen("output.txt", "w");
    char last_char = str[len - 1];
    for (i = 0; i < len - 1; i++)
    {
        if (str[i] == last_char)
        {
            fprintf(output_file, "%d ", i);
        }
    }
    fclose(output_file);
    return 0;
}