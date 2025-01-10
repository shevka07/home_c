#include <stdio.h>
#include <stdlib.h>

int find_missing_number(int a[], int size) 
{
    if (size <= 0)
        return -1; 
    long int expected_sum = 0;
    long int actual_sum = 0;
    int min = 1001;
    int max = 0;
    for (int i = 0; i < size; i++) 
    {
      if(a[i] < min) min = a[i];
      if(a[i] > max) max = a[i];
        actual_sum += a[i];
    }
    for (int i = min; i <= max; i++)
        expected_sum += i;
    return expected_sum - actual_sum;
}

int Input(int arr[], int n) 
{
int i=0;
int value;
    while (scanf("%d", &value) == 1 && value != 0) 
    {
        if (i < n)
        {
            arr[i] = value;
            i++;
        }
    }
    return i;
}
int main() 
{
    int a[1001];
    int i = 0;
    int len = Input(a,1001);
    long int missing_number = find_missing_number(a, len);
    printf("%ld\n", missing_number);
    return 0;
}