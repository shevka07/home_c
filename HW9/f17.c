#include <stdio.h>
int calculate_trace(int matrix[][5], int size) 
{
    int trace = 0;
    for (int i = 0; i < size; i++) 
    {
            trace += matrix[i][i];
    }
    return trace;
}

int main() 
{
    int matrix[5][5];
    for (int i = 0; i < 5; i++) 
    {
        for (int j = 0; j < 5; j++) 
        {
             scanf("%d", &matrix[i][j]);
        }
    }
    int trace = calculate_trace(matrix, 5);
    printf("%d\n", trace);
    return 0;
}