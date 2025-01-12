#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX_LENGTH 1001
#define ALPHABET_SIZE 26

void buildPalindrome(char *str, char *result)
{
    int counts[ALPHABET_SIZE] = {0};
    int len = strlen(str);
    int i, j = 0;
    char middle_char = '\0';
    for (i = 0; i < len; i++)
    {
        counts[str[i] - 'a']++;
    }
    for (i = 0; i < ALPHABET_SIZE; i++)
    {
        if (counts[i] > 0)
        {
            int count = counts[i] / 2;
            for (int k = 0; k < count; k++)
            {
                result[j++] = i + 'a';
            }
            counts[i] %= 2;
        }
    }
    for (i = 0; i < ALPHABET_SIZE; i++)
    {
        if (counts[i] == 1)
        {
            middle_char = i + 'a';
            break;
        }
    }
    int middle_index = j;
    if (middle_char != '\0')
    {
        result[j++] = middle_char;
    }

    for (i = middle_index - 1; i >= 0; i--)
    {
        result[j++] = result[i];
    }
    result[j] = '\0';
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
    buildPalindrome(inputString, outputString);
    output_file = fopen("output.txt", "w");
    fprintf(output_file, "%s", outputString);
    fclose(output_file);
    return 0;
}