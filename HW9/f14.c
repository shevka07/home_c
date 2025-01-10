#include <stdio.h>
const int N = 100;
int sum_between_ab(int from, int to, int size, int a[]) 
{
    int sum = 0;
    for (int i = 0; i < size; i++) 
    {
        if (a[i] >= from && a[i] <= to) 
        {
            sum += a[i];
        }
    }
    return sum;
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
    int result = sum_between_ab(from, to, len, arr);
    printf("%d\n", from, to, result);
    return 0;
}