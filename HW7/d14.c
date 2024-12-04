#include <stdio.h>
void printNechNumbers(void) 
{
    int num;
    if (scanf("%d", &num) == 1) 
    {
        if (num != 0 && num % 2 != 0) 
        {
            printf("%d ", num);
        }
        printNechNumbers(); 
    }
}

int main() {
    printNechNumbers();
    return 0;
}