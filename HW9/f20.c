#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int product_of_digits(int num, int even_or_odd) 
{
    int product = 1;
    char num_str[11];
    sprintf(num_str, "%d", abs(num));
    for (int i = 0; num_str[i] != '\0'; i++) 
    {
        int digit = num_str[i] - '0';
        if ((even_or_odd == 1 && digit % 2 == 0) || (even_or_odd == 0 && digit % 2 != 0)) 
        {
            product *= digit;
        }
    }
    return product;
}

void process_array(int arr[], int size) 
{
    int even_count = 0;
    int odd_count = 0;
    for (int i = 0; i < size; i++) 
    {
        if (arr[i] % 2 == 0) 
        {
            even_count++;
        } 
        else 
        {
            odd_count++;
        }
    }

    for (int i = 0; i < size; i++) 
    {
        if (even_count > odd_count) 
        {
            if (arr[i] % 2 != 0) 
            {
                arr[i] = product_of_digits(arr[i], 0);
            }
        } 
        else 
        {
            if (arr[i] % 2 == 0) 
            {
                arr[i] = product_of_digits(arr[i], 1);
            }
        }
    }
}

int main() 
{
    int arr[10];
    int size = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < size; i++) 
    {
        scanf("%d", &arr[i]);
    }
    process_array(arr, size);
    for (int i = 0; i < size; i++) 
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}