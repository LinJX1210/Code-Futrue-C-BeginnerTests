#include <stdio.h>
  //There is an error somewhere in this line.
  //Please correct the error to make the program run normally.
  //Don't modify anything else.
struct Student {
    char name[20];
    int age;
};

int main() {
    struct Student s;
    s.name = "John";
    s.age = 20;
    printf("name: %s, age: %d\n", s.name, s.age);
    return 0;
}