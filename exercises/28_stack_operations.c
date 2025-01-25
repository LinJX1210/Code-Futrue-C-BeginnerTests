#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 100

// Define the stack structure
typedef struct Stack {
    int data[MAX_SIZE];
    int top;
} Stack;

//Initialize the stack
void initStack(Stack* stack) {
    stack->top = -1;
}

// Determine whether the stack is empty
int isEmpty(Stack* stack) {
    //TODO: Please complete the code
}

// Stack ingress operations
void push(Stack* stack, int value) {
    //TODO:Please complete the code
}

// Off-stack operations
int pop(Stack* stack) {
    //TODO:Please complete the code
}

int main() {
    Stack stack;
    initStack(&stack);

    push(&stack, 1);
    push(&stack, 2);
    push(&stack, 3);

    while (!isEmpty(&stack)) {
        printf("%d ", pop(&stack));
    }
    printf("\n");

    return 0;
}