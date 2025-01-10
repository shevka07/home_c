#include <stdio.h>

void swap_negmax_last(int size, int a[])
{
    if (size <= 0) 
        return; 
    int max_neg = -2147483648;
    int max_neg_index = -1; 
    for (int i = 0; i < size; i++) 
    {
        if (a[i] < 0 && a[i] > max_neg) 
        {
            max_neg = a[i];
            max_neg_index = i;
        }
    }
    if (max_neg_index != -1) 
    {
        int temp = a[max_neg_index];
        a[max_neg_index] = a[size - 1];
        a[size - 1] = temp;
    }
}


int main() 
{
    int arr[] = {1, -2, -3, -4, 5, 6, 7, 8, 9, 10};
    int size = sizeof(arr) / sizeof(arr[0]);
    swap_negmax_last(size, arr);
    for (int i = 0; i < size; i++) 
        printf("%d ", arr[i]);
    printf("\n");
    return 0;
}