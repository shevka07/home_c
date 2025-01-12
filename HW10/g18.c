#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>

#define MAX_LENGTH 1001

void removeExtraSpaces(char *input, char *output)
{
    int i = 0;
    int j = 0;
    bool space_found = false;
    while (input[i] == ' ')
    {
        i++;
    }
    while (input[i] != '\0')
    {
        if (input[i] == ' ')
        {
            if (!space_found)
            {
                output[j++] = input[i];
                space_found = true;
            }
            i++;
        }
        else
        {
            output[j++] = input[i];
            space_found = false;
            i++;
        }
    }
    output[j] = '\0';
}

int main()
{
    FILE *input_file, *output_file;
    char inputString[MAX_LENGTH];
    char outputString[MAX_LENGTH];
    input_file = fopen("input.txt", "r");
    fgets(inputString, MAX_LENGTH, input_file);
    fclose(input_file);
    int len = strlen(inputString);
    if (inputString[len - 1] == '\n')
    {
        inputString[len - 1] = '\0';
        len--;
    }
    removeExtraSpaces(inputString, outputString);
    output_file = fopen("output.txt", "w");
    fprintf(output_file, "%s", outputString);
    fclose(output_file);
    return 0;
}