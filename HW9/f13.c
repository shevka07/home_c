#include <stdio.h>
const int N = 100;
int count_between(int from, int to, int size, int a[]) 
{
    int count = 0;
    for (int i = 0; i < size; i++) 
    {
        if (a[i] >= from && a[i] <= to) 
        {
            count++;
        }
    }
    return count;
}

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


int main() 
{
    int arr[N];
    int len = Input(arr,N);
    int from = 4;
    int to = 6;
    int result = count_between(from, to, len, arr);
    printf("%d\n", from, to, result);  
    return 0;
}