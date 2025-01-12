#include <stdio.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

#define MAX_LENGTH 1001

void buildTriangle(int stones, FILE *output_file)
{
    int n = (-1 + sqrt(1 + 8 * stones)) / 2;
    if (n * (n + 1) / 2 != stones)
    {
        fprintf(output_file, "NO\n");
        return;
    }
    int i, j, k;
    for (i = 0; i < n; i++)
    {
        for (k = 0; k < n - i - 1; k++)
        {
            fprintf(output_file, " ");
        }
        for (j = 0; j <= i; j++)
        {
            fprintf(output_file, "*");
            if (j != i)
                fprintf(output_file, " ");
        }
        fprintf(output_file, "\n");
    }
}

int main()
{
    FILE *input_file, *output_file;
    char inputString[MAX_LENGTH];
    int stones = 0;
    int i;
    input_file = fopen("input.txt", "r");
    while (fgets(inputString, MAX_LENGTH, input_file) != NULL)
    {
        int len = strlen(inputString);
        for (i = 0; i < len; i++)
        {
            if (inputString[i] == '*')
            {
                stones++;
            }
        }
    }
    fclose(input_file);
    output_file = fopen("output.txt", "w");
    if (stones == 0)
    {
        fprintf(output_file, "NO\n");
        fclose(output_file);
        return 0;
    }
    buildTriangle(stones, output_file);
    fclose(output_file);
    return 0;
}