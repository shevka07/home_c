#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

const int N = 10;

void findUniqueElements(int arr[], int size) 
{
    bool checked[size];
    for (int i = 0; i < size; i++) 
        checked[i] = false;


    for (int i = 0; i < size; i++) 
    {
        if (checked[i]) continue; 
        int count = 0;
        for (int j = 0; j < size; j++) 
        {
           if (arr[i] == arr[j]) 
           {
                count++;
                checked[j] = true; 
            }
        }
        if (count == 1) 
        {
           printf("%d ", arr[i]);
        }
    }
    printf("\n");
}

int main() 
{
    int arr[N];
    for (int i = 0; i < N; i++)
       scanf("%d", &arr[i]);
    findUniqueElements(arr, N);
    return 0;
}