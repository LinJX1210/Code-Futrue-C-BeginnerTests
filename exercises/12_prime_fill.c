#include <stdio.h>
#include <stdbool.h>

//Complete the underlined part.
//Don't modify anything else.

int main() {
    int num = 7;
    bool isPrime = true;
    for (int i = 2; i < num; i++) {
        if (______) {
            isPrime = false;
            break;
        }
    }
    if (isPrime) {
        printf("%d is a prime number\n", num);
    } else {
        printf("%d is not a prime number\n", num);
    }
    return 0;
}