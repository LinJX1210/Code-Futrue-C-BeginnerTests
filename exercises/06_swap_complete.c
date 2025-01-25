#include <stdio.h>

//Without introducing a third variable,
//the values of two numbers are exchanged.

void swap(int *x, int *y) {
    // Write the code here

}


int main() {
    int a = 3, b = 5;
    printf("Before swapping: a = %d, b = %d\n", a, b);
    swap(&a, &b);
    printf("After swapping: a = %d, b = %d\n", a, b);
    return 0;
}