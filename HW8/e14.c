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

void findDuplicates(int arr[], int size, int result[], int *resultSize) 
{
    *resultSize = 0;
    for (int i = 0; i < size; i++) {
        int count = 0;
        for (int j = 0; j < size; j++) {
            if (arr[i] == arr[j]) 
            {
                count++;
            }
        }
        if (count > 1) {
            bool found = false;
            for (int k = 0; k < *resultSize; k++) 
            {
              if (result[k] == arr[i]) {
                  found = true;
                   break;
               }
            }
            if (!found) 
            {
               if (*resultSize < 10) {
                    result[*resultSize] = arr[i];
                    (*resultSize)++;
                 } 
                 else 
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
    findDuplicates(arr, len, result, &resultSize);
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