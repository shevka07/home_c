#include <stdio.h>

int find_max_in_row(int row[], int size) 
{
    int max = row[0];
    for (int i = 1; i < size; i++) 
    {
        if (row[i] > max) 
        {
            max = row[i];
        }
    }
    return max;
}

int sum_of_max_elements(int matrix[][10], int rows) 
{
    int total_sum = 0;
    for (int i = 0; i < rows; i++) 
    {
        total_sum += find_max_in_row(matrix[i], 10);
    }
    return total_sum;
}

int main() 
{
    int matrix[10][10];
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) 
        {
            scanf("%d", &matrix[i][j]);
        }
    }

    int sum = sum_of_max_elements(matrix, 10);
    printf("%d\n", sum);
    return 0;
}