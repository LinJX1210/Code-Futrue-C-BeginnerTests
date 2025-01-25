#include <stdio.h>

// Complete this function to calculate the average value of the array elements
float calculateAverage(int arr[], int size) {
    // Write the code here
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    float avg = calculateAverage(arr, size);
    printf("The average value of the array elements is: %.2f\n", avg);
    return 0;
}