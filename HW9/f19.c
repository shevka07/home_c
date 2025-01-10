#include <stdio.h>

double average_of_diagonal(int matrix[][5], int size) 
{
    double sum = 0.0;
    for (int i = 0; i < size; i++) 
    {
        sum += matrix[i][i];
    }
    return sum/size;
}

int count_positive_greater_than_average(int matrix[][5], int size) 
{
    double avg = average_of_diagonal(matrix, size);
    int count = 0;
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) 
        {
            if (matrix[i][j] > avg && matrix[i][j] > 0) 
            {
                count++;
            }
        }
    }
    return count;
}

int main() 
{
    int matrix[5][5];
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) 
        {
            scanf("%d", &matrix[i][j]);
        }
    }
    int count = count_positive_greater_than_average(matrix, 5);
    printf("%d\n", count);
    return 0;
}