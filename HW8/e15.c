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
}

void splitArray(int arr[], int size, int positive[], int* positiveSize, int negative[], int* negativeSize)
 {
    *positiveSize = 0;
    *negativeSize = 0;

    for (int i = 0; i < size; i++) {
        if (arr[i] > 0) {
             if(*positiveSize < 10) 
             {
                positive[*positiveSize] = arr[i];
                  (*positiveSize)++;
             } 
             else 
                return;
        } 
        else if (arr[i] < 0)
        {
           if(*negativeSize < 10) 
           {
              negative[*negativeSize] = arr[i];
               (*negativeSize)++;
             } 
             else 
                 return;
        }
    }
}

int main() 
{
    int arr[N];
    int positive[N],negative[N];
    int positiveSize=0, negativeSize = 0;
    int len = Input(arr,N);
    splitArray(arr, len, positive, &positiveSize, negative, &negativeSize);
    if (positiveSize != 0)  
        printArray(positive, positiveSize);
    if (negativeSize != 0) 
        printArray(negative, negativeSize);
    printf("\n");
    return 0;
}