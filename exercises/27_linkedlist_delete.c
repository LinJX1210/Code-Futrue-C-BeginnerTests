#include <stdio.h>
#include <stdlib.h>

// Define the linked list node structure
typedef struct Node {
    int data;
    struct Node* next;
} Node;

// Delete nodes in a linked list whose value is equal to the given value
Node* deleteNodes(Node* head, int value) {
    //TODO:Please complete the code
}

// Print linked lists
void printList(Node* head) {
    Node* current = head;
    while (current != NULL) {
        printf("%d ", current->data);
        current = current->next;
    }
    printf("\n");
}

int main() {
    Node* head = (Node*)malloc(sizeof(Node));
    head->data = 1;
    head->next = (Node*)malloc(sizeof(Node));
    head->next->data = 2;
    head->next->next = (Node*)malloc(sizeof(Node));
    head->next->next->data = 2;
    head->next->next->next = (Node*)malloc(sizeof(Node));
    head->next->next->next->data = 3;
    head->next->next->next->next = NULL;

    int valueToDelete = 2;
    head = deleteNodes(head, valueToDelete);

    printList(head);

    return 0;
}