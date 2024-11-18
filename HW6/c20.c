#include <stdio.h>
#define MAX_SIZE 1000

int isCorrectScobki(char str[]) 
{
    int count = 0;
    for (int i = 0; str[i] != '.'; i++) 
    {
        if (str[i] == '(') 
        {
            count++;
        } 
        else if (str[i] == ')') 
        {
            if (count == 0) 
            {
                return 0;
            } 
            else 
            {
                count--;
            }
        }
    }
    if (count == 0) 
    {
        return 1;
    } 
    else 
    {
        return 0;
    }
}

int main() {
    char str[MAX_SIZE];
    
    scanf("%s", str);
    
    if (isCorrectScobki(str)) 
    {
        printf("YES\n");
    } 
    else 
    {
        printf("NO\n");
    }
    
    return 0;
}