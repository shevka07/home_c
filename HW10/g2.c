#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main() 
{
    FILE *input_file, *output_file;
    int N;
    char str[27];
    int even_digit = 2; 
    char letter = 'A'; 
    input_file = fopen("input.txt", "r");
    fscanf(input_file, "%d", &N);
    fclose(input_file);
    for (int i = 0; i < N; i++) 
    {
        if ((i + 1) % 2 == 0) 
        { 
           str[i] = even_digit + '0';
            even_digit = (even_digit == 8) ? 2: even_digit + 2;
        } 
        else 
        {
            str[i] = letter;
            letter++;
        }
    }
    str[N] = '\0'; 
    output_file = fopen("output.txt", "w");
    fprintf(output_file, "%s", str);
    fclose(output_file);
    return 0;
}