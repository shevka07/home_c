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

int sumOfPositive(int arr[], int n)
{ 
    int sum = 0;
    for (int i=0; i<n; i++)
    {
        if (arr[i] > 0 )
        {
           sum+=arr[i];
        }
    }
    return sum;    
}

int main()
{
    int a[N];
    int len = Input(a,N);
    printf("%d\n",sumOfPositive(a, len));
    return 0;
}