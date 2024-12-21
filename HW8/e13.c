#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
const int N = 10;
int Input(int arr[], int n) 
{
int i=0;
char c;
    while ((c = getchar()) != '\n')
    {
        ungetc(c, stdin);
        scanf("%d",&arr[i]);
        i++;
    }      
    return i;
}

void printArray(int arr[], int n) 
{
    for (int i = 0; i < n; i++) 
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void filterBySecondOrder(int arr[], int size, int result[], int* resultSize) 
{
 *resultSize = 0;
    for (int i = 0; i < size; i++) {
         int num = arr[i];
        int tensDigit = 0;

        if (abs(num) >= 10) 
        { 
            tensDigit = (abs(num) / 10) % 10; 
        }

       if (tensDigit == 0 && (abs(num) < 10 || (abs(num) >= 10 && (abs(num) / 10) % 10 == 0) ))
        { 
           if (*resultSize < 10) {
                result[*resultSize] = arr[i];
                (*resultSize)++;
           } else 
           {
             return;
           }
        }
    }
}
int main() {
    int arr[N];
    int result[N];
    int resultSize = 0;
    int len = Input(arr,N);
    filterBySecondOrder(arr, len, result, &resultSize);
    if (resultSize == 0) 
    {
         printf("\n");
    } 
    else 
    {
        printArray(result, resultSize);
    }
    return 0;
}