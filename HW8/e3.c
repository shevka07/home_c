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

void MinVal(int arr[], int n, int *min, int *minIndex)
{
    *min = arr[0];
    *minIndex = 1;
    for (int i=0; i<n; i++)
    {
        if (arr[i] < *min) 
        {
            *min = arr[i];
            *minIndex = i+1;
        }
    }    
}
void MaxVal(int arr[], int n, int *max, int *maxIndex)
{
    *max = arr[0];
    *maxIndex = 1;
    for (int i=0; i<n; i++)
    {
        if (arr[i] > *max) 
        {
            *max = arr[i];
            *maxIndex = i+1;
        }
    }    
}

int main()
{
    int a[N], max, maxIndex, min, minIndex;
    int len = Input(a,N);
    MaxVal(a,len,&max,&maxIndex);
    MinVal(a,len,&min,&minIndex);
    printf("%d %d %d %d\n",maxIndex, max, minIndex, min);
    return 0;
}