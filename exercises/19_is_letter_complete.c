#include <stdio.h>
#include <ctype.h>

// Complete this function to determine whether the character is a letter or not
int isLetter(char ch) {
    // Write the code here
}

int main() {
    char ch = 'A';
    if (isLetter(ch)) {
        printf("%c It's letters\n", ch);
    } else {
        printf("%c Not letters\n", ch);
    }
    return 0;
}