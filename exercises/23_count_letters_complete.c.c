#include <stdio.h>
#include <ctype.h>

// Complete this function to count the number of letters in a string
int countLetters(char str[]) {
    // Write the code here
    int i = 0;
    while (str[i] != '\0') {
        i++;
    }
    return i;
}

int main() {
    char str[] = "Hello";
    int count = countLetters(str);
    printf("Number of letters in the string: %d\n", count);
    return 0;
}