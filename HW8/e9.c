#include <stdio.h>
const int  N = 10;

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

void cyclicShiftRight(int arr[], int size) 
{
    if (size <= 0) {
        return;
    }
    int lastElement = arr[size - 1]; 
    for (int i = size - 1; i > 0; i--) 
    {
        arr[i] = arr[i - 1];
    }
    arr[0] = lastElement;
}


int main() 
{
    int arr[N];
    int len = Input(arr,N);
    cyclicShiftRight(arr, len);
    printArray(arr, len);
    return 0;
}