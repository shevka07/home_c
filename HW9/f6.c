#include <stdio.h>
#include <stdbool.h>

int is_two_same(int size, int a[]) 
{
    if (size <= 1)
        return 0;
    for (int i = 0; i < size - 1; i++) 
    {
        for (int j = i + 1; j < size; j++) 
        {
            if (a[i] == a[j]) 
                return 1;
        }
    }
    return 0;
}

/*
int main() 
{
    int arr1[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64, 65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 80, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90, 91, 92, 93, 94, 95, 96, 97, 98, 99, 100};
    int size1 = sizeof(arr1) / sizeof(arr1[0]);
    int arr2[] = {1, 2, 1, 4, 5};
    int size2 = sizeof(arr2) / sizeof(arr2[0]);
    if (is_two_same(size1, arr1)) 
    printf("YES\n");
    else
    printf("NO\n");
    if (is_two_same(size2, arr2))
    printf("YES\n");
    else
    printf("NO\n");
    return 0;
}
*/