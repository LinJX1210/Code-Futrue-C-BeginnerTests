#include <stdio.h>
#include <stdlib.h>

// Define the linked list node structure
typedef struct Node {
    int data;
    struct Node* next;
} Node;

// Find the intermediate node of the linked list
Node* findMiddle(Node* head) {
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
    head->next->next->data = 3;
    head->next->next->next = (Node*)malloc(sizeof(Node));
    head->next->next->next->data = 4;
    head->next->next->next->next = (Node*)malloc(sizeof(Node));
    head->next->next->next->next->data = 5;
    head->next->next->next->next->next = NULL;

    Node* middle = findMiddle(head);
    if (middle != NULL) {
        printf("Middle node data: %d\n", middle->data);
    }

    return 0;
}