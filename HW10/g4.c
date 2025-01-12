#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

#define MAX_LENGTH 101
int compare_chars(const void *a, const void *b) 
{
    return (*(char *)a - *(char *)b);
}

int main() 
{
    FILE *input_file, *output_file;
    char word1[MAX_LENGTH], word2[MAX_LENGTH];
    int counts1[26] = {0}; 
    int counts2[26] = {0};
    char result[MAX_LENGTH * 2];
    int result_count = 0;
    int i;
    input_file = fopen("input.txt", "r");
    fscanf(input_file, "%100s %100s", word1, word2);
    fclose(input_file);
    for (i = 0; word1[i] != '\0'; i++) 
    {
        if(isalpha(word1[i]) && islower(word1[i]))
           counts1[word1[i] - 'a']++;
    }
    for (i = 0; word2[i] != '\0'; i++) 
    {
         if(isalpha(word2[i]) && islower(word2[i]))
           counts2[word2[i] - 'a']++;
    }
    for (i = 0; i < 26; i++) 
    {
        if (counts1[i] == 1 && counts2[i] == 1) 
        {
           result[result_count++] = 'a' + i;
        }
    }
    qsort(result, result_count, sizeof(char), compare_chars);
    output_file = fopen("output.txt", "w");
    for (i = 0; i < result_count; i++) 
    {
        fprintf(output_file, "%c ", result[i]);
    }
    fclose(output_file);
    return 0;
}