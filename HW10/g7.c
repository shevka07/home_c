#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX_LENGTH 10001

int main() 
{
    FILE *input_file, *output_file;
    char str[MAX_LENGTH];
    int lower_count = 0;
    int upper_count = 0;
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
        if (islower(str[i])) 
        {
            lower_count++;
        } 
        else if (isupper(str[i])) 
        {
            upper_count++;
        }
    }
    output_file = fopen("output.txt", "w");
    fprintf(output_file, "%d %d\n", lower_count, upper_count);
    fclose(output_file);
    return 0;
}