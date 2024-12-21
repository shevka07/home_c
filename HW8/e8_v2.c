#include <stdio.h>

void reverse(int arr[], int start, int end) {
    while (start < end) {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

void invertThirds(int arr[], int size) {
    if (size % 3 != 0) {
        return;
    }

    int third = size / 3;
    reverse(arr, 0, third - 1);
    reverse(arr, third, 2 * third - 1);
    reverse(arr, 2 * third, size - 1);
}


int main() {
    int arr[12];
    for (int i = 0; i < 12; i++) {
        scanf("%d", &arr[i]);
        }
    invertThirds(arr, 12);
    for (int i = 0; i < 12; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}