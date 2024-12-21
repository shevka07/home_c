#include <stdio.h>
const int N = 12;
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

void cyclicShiftRight(int *arr, int size, int shift) 
{
    if (size <= 0 || shift <= 0)
        return;
    shift = shift % size;
    for(int j = 0; j < shift; j++)
    {
        int lastElement = arr[size - 1];
         for(int *p = arr + size - 1; p > arr; p--) 
             *p = *(p-1);
        *arr = lastElement;
    }
}

int main() {
    int arr[N];
    int shift = 4;
    int len = Input(arr,N);
    cyclicShiftRight(arr, len, shift);
    printArray(arr, len);
    return 0;
}