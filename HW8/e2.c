#include <stdio.h>
const int  N = 5;
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

int MinVal(int arr[], int n)
{
    int min = arr[0];
    for (int i=1; i<n; i++)
    {
        if (arr[i]<min)
        {
            min = arr[i];
        }       
    }
    return min;
}
int main()
{
    int a[N];
    int len = Input(a,N);
    printf("%d",MinVal(a,len));
    return 0;
}