#include <stdio.h>
#include <string.h>
int main() 
{
    FILE *input_file, *output_file;
    char str[101];
    int len;
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
    fprintf(output_file, "%s, %s, %s %d", str, str, str, len);
    fclose(output_file);
    return 0;
}