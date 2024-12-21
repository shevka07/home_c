#include <stdio.h>
const int  N = 12;
int Input(int* arr, int n) 
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

void SwapArr(int *arr,int i,int j)
{
    int temp = arr[i];
    arr[i]   = arr[j];
    arr[j]   = temp;
}
void printArray(int arr[], int n) 
{
    for (int i = 0; i < n; i++) 
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main()
{
    int a[N];
    int len = Input(a,N);
    for (int i=0; i<2; i++)
    {
        SwapArr(a,i,3-i);
        SwapArr(a,4+i,7-i);
        SwapArr(a,8+i,11-i);
    }
    printArray(a, len);
    return 0;
}