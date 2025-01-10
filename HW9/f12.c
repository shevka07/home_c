#include <stdio.h>

void find_min_sum_indices(int arr[], int size) 
{
    int min_sum = 2147483647; 
    int index1 = -1, index2 = -1;
    for (int i = 0; i < size; i++) 
    {
        for (int j = i + 1; j < size; j++) 
        {
            int current_sum = arr[i] + arr[j];
            if (current_sum < min_sum) 
            {
                min_sum = current_sum;
                index1 = i;
                index2 = j;
            }
        }
    }

    if (index1 < index2) 
    {
        printf("%d %d\n", index1, index2);
    } 
    else 
    {
        printf("%d %d\n", index2, index1);
    }
}

int main() 
{
    int arr[30];
    for (int i = 0; i < 30; i++) 
    {
       scanf("%d", &arr[i]);
    }
    find_min_sum_indices(arr, 30);
    return 0;
}