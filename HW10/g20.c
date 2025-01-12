#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>

#define MAX_LENGTH 1001
#define ALPHABET_SIZE 26

bool is_palindrome(char *str)
{
    int counts[ALPHABET_SIZE] = {0};
    int len = strlen(str);
    int odd_count = 0;
    int i;
    for (i = 0; i < len; i++)
    {
        if (isalpha(str[i]))
        {
            counts[tolower(str[i]) - 'a']++;
        }
    }
    for (i = 0; i < ALPHABET_SIZE; i++)
    {
        if (counts[i] % 2 != 0)
        {
            odd_count++;
        }
    }
    return odd_count <= 1;
}

int main()
{
    FILE *input_file;
    char inputString[MAX_LENGTH];
    input_file = fopen("input.txt", "r");
    fgets(inputString, MAX_LENGTH, input_file);
    fclose(input_file);
    int len = strlen(inputString);
    if (inputString[len - 1] == '\n')
    {
        inputString[len - 1] = '\0';
        len--;
    }
    if (is_palindrome(inputString))
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
    return 0;
}