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

int compareAsc(const void *a, const void *b) 
{
    return *(const int *)a - *(const int *)b;
}

int compareDesc(const void *a, const void *b) 
{
    return *(const int *)b - *(const int *)a;
}


int main() 
{
    int arr[10];
    int len = Input(arr,N);
    qsort(arr, len/2, sizeof(int), compareAsc);
    qsort(arr + len/2, len - len/2, sizeof(int), compareDesc);
    printArray(arr, len);
    return 0;
}
