#include <stdio.h>
const int  N = 5;
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

float Average(int arr[], int n)
{
    float sum = 0.0;
    for (int i=0; i<n; i++)
    {
        sum+=arr[i];
    }
    return sum/n;
}
int main()
{
    int a[N];
    int len = Input(a,N);
    printf("%.3f",Average(a,len));
    return 0;
}