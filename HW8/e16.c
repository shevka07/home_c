#include <stdio.h>
#include <stdlib.h>
#define MAX_RANGE 1001
const int N = 10;

int findMostFrequent(int arr[], int size) 
{
    if (size == 0) 
        return 0; 
    int min = arr[0];
    int max = arr[0];
    for(int i=1; i < size; i++)
    {
        if(arr[i] < min)
             min = arr[i];
        if(arr[i] > max)
             max = arr[i];
    }
    int counts[MAX_RANGE] = {0}; 
    for (int i = 0; i < size; i++) {
        counts[arr[i] - min]++;
    }
    int mostFrequent = arr[0]; 
    int maxCount = 1;
      for (int i = 0; i < size; i++) {
       if(counts[arr[i] - min] > maxCount){
          maxCount = counts[arr[i] - min];
          mostFrequent = arr[i];
       }
    }

    return mostFrequent;
}

int main() 
{
    int arr[N];
    for (int i = 0; i < N; i++) 
       scanf("%d", &arr[i]);
    printf("%d\n", findMostFrequent(arr, N));
    return 0;
}