#include <stdio.h>
void CompareAndPrint(int A, int B) 
{ 
    
    if(A==B)
    {
        printf("%d ",A);
        return;
    }
    if (A>B)
    {
        printf("%d ",A);
        CompareAndPrint(A-1, B);
    }else
    {
        CompareAndPrint(A, B-1);
        printf("%d ",B);
    }
}

int main(void)
{
    int a,b;
    scanf("%d%d",&a,&b);
    CompareAndPrint(a,b);
    return 0;
}

