#include <stdio.h>
//Complete the underlined part.
//Don't modify anything else.
int main() {
    int arr[] = {3, 7, 2, 9, 5};
    int max = arr[0];
    for (int i = 1; i < ______; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    printf("The maximum element in the array is: %d\n", max);
    return 0;
}