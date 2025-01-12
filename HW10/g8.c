#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define MAX_LENGTH 1001
#define MAX_NUMBERS 100

int compare_ints(const void *a, const void *b)
{
    return (*(int *)a - *(int *)b);
}

int main()
{
    FILE *input_file, *output_file;
    char str[MAX_LENGTH];
    int numbers[MAX_NUMBERS];
    int num_count = 0;
    int current_num = 0;
    int i;
    char is_number = 0;
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
        if (isdigit(str[i]))
        {
            current_num = current_num * 10 + (str[i] - '0');
            is_number = 1;
        }
        else
        {
            if (is_number)
            {
                numbers[num_count++] = current_num;
                current_num = 0;
                is_number = 0;
            }
        }
    }
    if (is_number)
    {
        numbers[num_count++] = current_num;
    }

    qsort(numbers, num_count, sizeof(int), compare_ints);
    output_file = fopen("output.txt", "w");
    for (i = 0; i < num_count; i++)
    {
        fprintf(output_file, "%d ", numbers[i]);
    }
    fclose(output_file);
    return 0;
}