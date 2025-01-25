#include <stdio.h>

// Complete this function to sort the array elements
void sortArray(int arr[], int size) {
    // Write the code here
}

int main() {
    int arr[] = {5, 3, 8, 1, 2};
    int size = sizeof(arr) / sizeof(arr[0]);
    sortArray(arr, size);
    printf("Sorted array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}