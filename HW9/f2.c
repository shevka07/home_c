#include <stdio.h>
#include <stdlib.h>
void sort_even_odd(int n, int a[]) 
{
    int even[1000];
    int odd[1000];
    int even_count = 0;
    int odd_count = 0;
    for (int i = 0; i < n; i++) 
    {
        if (a[i] % 2 == 0)
        even[even_count++] = a[i];
        else
        odd[odd_count++] = a[i];
    }
    for (int i = 0; i < even_count; i++)
        a[i] = even[i];
    for (int i = 0; i < odd_count; i++)
        a[even_count + i] = odd[i];
}


/*
int main() {
    int arr[] = {20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
    int size = sizeof(arr) / sizeof(arr[0]);
    sort_even_odd(size, arr);
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}
*/