#include <stdio.h>
#include <stdlib.h>
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

int compareByLastDigit(const void *a, const void *b) 
{
    int numA = *(const int *)a;
    int numB = *(const int *)b;
    int lastDigitA = abs(numA) % 10;
    int lastDigitB = abs(numB) % 10;
    return lastDigitA - lastDigitB;
}

int main() 
{
    int arr[10];
    int len = Input(arr,N);
    qsort(arr, len, sizeof(int), compareByLastDigit);
    printArray(arr, len);
    return 0;
}
