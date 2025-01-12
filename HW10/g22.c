#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX_LENGTH 21

void soundex(char *str, char *code) 
{
    int len = strlen(str);
    int j = 0;
    char prev_digit = '\0';
    int i;

    if (len == 0) 
    {
        strcpy(code, "0000");
        return;
    }
    code[j++] = str[0];
    for (i = 1; i < len; i++) 
    {
        char c = tolower(str[i]);
        char digit = '\0';
        switch (c) 
        {
            case 'b': case 'f': case 'p': case 'v': digit = '1'; break;
            case 'c': case 'g': case 'j': case 'k': case 'q': case 's': case 'x': case 'z': digit = '2'; break;
            case 'd': case 't': digit = '3'; break;
            case 'l': digit = '4'; break;
            case 'm': case 'n': digit = '5'; break;
            case 'r': digit = '6'; break;
            default: digit = '\0'; 
        }
        if (digit != '\0' && digit != prev_digit) 
        {
            code[j++] = digit;
             prev_digit = digit;
        }
    }
     code[4] = '\0';
    if (j > 4) {
        code[4] = '\0';
    } 
    else 
    {
         while(j < 4)
         {
           code[j++] = '0';
         }
    }
    code[4] = '\0'; 
}


int main() {
    FILE *input_file, *output_file;
    char inputString[MAX_LENGTH];
    char outputCode[5];
    input_file = fopen("input.txt", "r");
    fgets(inputString, MAX_LENGTH, input_file);
    fclose(input_file);
     int len = strlen(inputString);
    if (inputString[len - 1] == '\n') 
    {
       inputString[len - 1] = '\0';
        len--;
    }
    soundex(inputString, outputCode);
    output_file = fopen("output.txt", "w");
    fprintf(output_file, "%s", outputCode);
    fclose(output_file);
    return 0;
}