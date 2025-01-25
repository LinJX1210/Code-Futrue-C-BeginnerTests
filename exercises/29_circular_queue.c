#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 10

// Define a round-robin queue structure
typedef struct Queue {
    int data[MAX_SIZE];
    int front;
    int rear;
} Queue;

// Initialize the queue
void initQueue(Queue* queue) {
    queue->front = 0;
    queue->rear = 0;
}

// Check whether the queue is empty
int isQueueEmpty(Queue* queue) {
    //TODO:Please complete the code
}

// Enqueue operations
void enqueue(Queue* queue, int value) {
    //TODO:Please complete the code
}

// Out-of-line operations
int dequeue(Queue* queue) {
    //TODO:Please complete the code
}

int main() {
    Queue queue;
    initQueue(&queue);

    enqueue(&queue, 1);
    enqueue(&queue, 2);
    enqueue(&queue, 3);

    while (!isQueueEmpty(&queue)) {
        printf("%d ", dequeue(&queue));
    }
    printf("\n");

    return 0;
}