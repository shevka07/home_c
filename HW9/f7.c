#include <stdio.h>

int compression(int a[], int b[], int N)
 {
    if (N <= 0)
        return 0; 
    int b_index = 0;
    int current_count = 0;
    int current_value = a[0]; 
    int first_series = 1; 
    for (int i = 0; i < N; i++) 
    {
        if (a[i] == current_value) 
            current_count++;
        else 
        {
            if(first_series)
            {
              if(current_value == 1)
                 b[b_index++] = 0;
                first_series = 0;
            }
            b[b_index++] = current_count;
            current_count = 1;
            current_value = a[i];
        }
    }
    if(first_series)
    {
        if(current_value == 1)
           b[b_index++] = 0;
    }
    b[b_index++] = current_count;
    return b_index;
}


int main() 
{
    int arr1[] = {1, 1, 0, 0, 1, 1, 1, 0, 1, 1, 0, 0, 1, 0, 1, 0, 0, 1, 0, 0, 0, 0, 1, 1, 1, 1, 0, 1, 0, 0, 0, 0, 1, 1, 1, 0, 1, 1, 0, 1, 0, 0, 0, 1, 1, 0, 0, 1, 0, 0, 0, 1, 0, 0, 1, 1, 1, 0, 1, 0, 0, 0, 0, 0, 0, 1, 0, 1, 0, 0, 1, 1, 0, 1, 0, 0, 0, 0, 1, 0, 0, 1, 1, 0, 1, 0, 0, 0, 1, 0, 1, 1, 1, 1, 1, 1, 0, 1, 0, 0};
    int size1 = sizeof(arr1) / sizeof(arr1[0]);
    int b[100];
    int new_size1 = compression(arr1, b, size1);
    printf("[");
    for (int i = 0; i < new_size1; i++) 
    {
       printf("%d", b[i]);
       if(i != new_size1 -1)
         printf(",");
    }
     printf("]\n");
    return 0;
}