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

void MaxVal(int arr[], int n, int index, int *max, int *maxIndex)
{
    *max = arr[0];
    if (index!=0)
    {
        *maxIndex = 0;
    }
    else
    {
        *maxIndex = 1;
    }
    *max = arr[*maxIndex];
    
    for (int i=0; i<n; i++)
    {
        if ((arr[i] > *max)&&(i!=index))
        {
            *max = arr[i];
            *maxIndex = i;
        }
    }    
}

int main()
{
    int a[N], firstMax, firstMaxIndex, secondMax, secondMaxIndex;
    int len = Input(a,N);
    MaxVal(a,len,-1,&firstMax,&firstMaxIndex);
    MaxVal(a,len,firstMaxIndex,&secondMax,&secondMaxIndex);
    printf("%d\n",firstMax+secondMax);
    return 0;
}