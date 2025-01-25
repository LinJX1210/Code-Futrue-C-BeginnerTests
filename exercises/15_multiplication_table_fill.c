#include <stdio.h>
//Complete the underlined part.
//Don't modify anything else.

int main() {
    for (int i = 1; i <= 9; i++) {
        for (int j = 1; j <= ______; j++) {
            printf("%d * %d = %d ", i, j, i * j);
        }
        printf("\n");
    }
    return 0;
}